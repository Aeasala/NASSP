/***************************************************************************
This file is part of Project Apollo - NASSP
Copyright 2017

S-IVB Systems (Header)

Project Apollo is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

Project Apollo is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Project Apollo; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

See http://nassp.sourceforge.net/license/ for more details.

**************************************************************************/

#pragma once

#include "DelayTimer.h"

#define PUVALVE_CLOSED 0
#define PUVALVE_NULL 1
#define PUVALVE_OPEN 2

class SIVBSystems
{
public:
	SIVBSystems(VESSEL *v, THRUSTER_HANDLE &j2, PROPELLANT_HANDLE &j2prop, THRUSTER_HANDLE *aps, THRUSTER_HANDLE *ull, THRUSTER_HANDLE &lox, THGROUP_HANDLE &ver);
	virtual ~SIVBSystems();
	void RecalculateEngineParameters(double BaseThrust);
	virtual void RecalculateEngineParameters() = 0;
	virtual void SetSIVBMixtureRatio(double ratio) = 0;
	virtual void SwitchSelector(int channel) = 0;
	void Timestep(double simdt);
	bool PropellantLowLevel();
	void SetPUValve(int state);
	void SIVBBoiloff();

	void LVDCEngineCutoff() { LVDCEngineStopRelay = true; }
	void LVDCEngineCutoffOff() { LVDCEngineStopRelay = false; }
	void EDSEngineCutoff(bool cut) { EDSEngineStop = cut; }
	void SetEngineReadyBypass() { EngineReadyBypass = true; }
	void EngineStartOn() { EngineStart = true; }
	void EngineStartOff() { EngineStart = false; }
	void FirstBurnRelayOn() { FirstBurnRelay = true; }
	void FirstBurnRelayOff() { FirstBurnRelay = false; }
	void SecondBurnRelayOn() { SecondBurnRelay = true; }
	void SecondBurnRelayOff() { SecondBurnRelay = false; }
	void EDSCutoffDisable() { EDSCutoffDisabled = true; }
	void StartLOXVenting() { LOXVentValveOpen = true; }
	void EndLOXVenting() { LOXVentValveOpen = false; }
	void LH2ContinuousVentValveOpenOn() { LH2ContinuousVentValveOpen = true; }
	void LH2ContinuousVentValveCloseOn() { LH2ContinuousVentValveOpen = false; }
	void FireUllageIgnitionOn() { FireUllageIgnition = true; }
	void SetThrusterDir(double beta_y, double beta_p);
	void PointLevelSensorArming() { PointLevelSensorArmed = true; }
	void PointLevelSensorDisarming() { PointLevelSensorArmed = false; }
	void AuxHydPumpFlightModeOn() { AuxHydPumpFlightMode = true; }
	void AuxHydPumpFlightModeOff() { AuxHydPumpFlightMode = false; }
	void APSUllageEngineOn(int n);
	void APSUllageEngineOff(int n);
	void SetAPSAttitudeEngine(int n, bool on);
	void PrevalvesCloseOnReset() { PrevalvesCloseOn = false; }
	
	bool GetThrustOK() { return ThrustOKRelay; }

	void GetJ2ISP(double ratio, double &isp, double &ThrustAdjust);

	//To IU
	double GetLH2TankUllagePressurePSI() { return LH2TankUllagePressurePSI; }
	double GetLOXTankUllagePressurePSI() { return LOXTankUllagePressurePSI; }

	void SetEngineFailed();

	void SaveState(FILEHANDLE scn);
	void LoadState(FILEHANDLE scn);
protected:

	bool EngineOnLogic();

	bool FirstBurnRelay;
	bool SecondBurnRelay;
	bool EngineReady;
	//K11
	bool EngineReadyBypass;

	//K100 and K101
	bool ThrustOKRelay;
	//K105
	bool AftPowerDisableRelay;
	//K112 (K76)
	bool LVDCEngineStopRelay;
	//K46 (K198)
	bool PrevalvesCloseOn;
	//K91
	bool PassivationRelay;
	//K95
	bool EngineMainstageControlValveOpen;

	bool RSSEngineStop;
	bool EDSEngineStop;
	bool PropellantDepletionSensors;

	bool EnginePower;
	//K55
	bool FuelInjTempOKBypass;
	//K63 (K57)
	bool EngineStart;
	bool EngineStop;

	bool EDSCutoffDisabled;

	double ThrustTimer;
	double ThrustLevel;
	double BoiloffTime;

	bool LOXVentValveOpen;
	bool FireUllageIgnition;
	bool PointLevelSensorArmed;
	bool LH2ContinuousVentValveOpen;
	bool APSUllageOnRelay[2];
	bool AuxHydPumpFlightMode;

	double J2DefaultThrust;
	int PUValveState;

	double LH2TankUllagePressurePSI;
	double LOXTankUllagePressurePSI;

	VESSEL *vessel;
	THRUSTER_HANDLE &j2engine;
	THRUSTER_HANDLE *apsThrusters;
	THRUSTER_HANDLE *ullage;
	THRUSTER_HANDLE &loxvent;
	THGROUP_HANDLE &vernier;

	PROPELLANT_HANDLE &main_propellant;

	//Logic
	bool CutoffSignalA, CutoffSignalX;
	bool HeliumControlOn;
	bool EMTEMP1, EngineReady1;
	bool StartTankDischargeControlOn;
	bool EngineStartLockUp, SparkSystemOn, EngineStart3, EngineStart4;
	bool SparksDeenergized;
	bool PBSignal1, StartTurbines, PBSignal4;
	bool MainstageSignal, MainstageOn, IgnitionPhaseControlOn;
	bool VCBSignal1, VCBSignal2, VCBSignal3;
	bool IgnitionDetector, CC1Signal1, IgnitionDetectionLockup;
	bool CC2Signal1, CC2Signal2, CC2Signal3, CutoffLockup;
	int EngineState; //0 = Off, 1 = Starting, 2 = Running, 3 = Stopping

	DelayTimer HeliumControlDeenergizedTimer;
	DelayTimer StartTankDischargeDelayTimer;
	DelayTimer IgnitionPhaseTimer;
	DelayTimer SparksDeenergizedTimer;

	bool EngineFailed;
};

class SIVB200Systems : public SIVBSystems
{
public:
	SIVB200Systems(VESSEL *v, THRUSTER_HANDLE &j2, PROPELLANT_HANDLE &j2prop, THRUSTER_HANDLE *aps, THRUSTER_HANDLE *ull, THRUSTER_HANDLE &lox, THGROUP_HANDLE &ver);
	~SIVB200Systems() {};
	void RecalculateEngineParameters();
	void SwitchSelector(int channel);
	void SetSIVBMixtureRatio(double ratio);
};

class SIVB500Systems : public SIVBSystems
{
public:
	SIVB500Systems(VESSEL *v, THRUSTER_HANDLE &j2, PROPELLANT_HANDLE &j2prop, THRUSTER_HANDLE *aps, THRUSTER_HANDLE *ull, THRUSTER_HANDLE &lox, THGROUP_HANDLE &ver);
	~SIVB500Systems() {};
	void RecalculateEngineParameters();
	void SwitchSelector(int channel);
	void SetSIVBMixtureRatio(double ratio);
};

#define SIVBSYSTEMS_START_STRING	"SIVBSYSTEMS_BEGIN"
#define SIVBSYSTEMS_END_STRING		"SIVBSYSTEMS_END"