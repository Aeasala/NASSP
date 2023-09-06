/**************************************************************************
  This file is part of Project Apollo - NASSP
  Copyright 2023 Matthew Hume


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

  See https://github.com/orbiternassp/NASSP/blob/Orbiter2016/NASSP-LICENSE.txt
  for more details.

**************************************************************************/

#if !defined(_PA_SKYLAB_H)
#define _PA_SKYLAB_H

#include "Orbitersdk.h"
#include "PanelSDK/PanelSDK.h"
#include "powersource.h"
#include "soundlib.h"
#include "connector.h"
#include "nasspdefs.h"
#include "ATMDC.h"


class Skylab: public ProjectApolloConnectorVessel{
public:
	Skylab(OBJHANDLE hObj, int fmodel);
	virtual ~Skylab();
	void InitSkylab();
	void clbkPostCreation();
	void clbkSetClassCaps(FILEHANDLE cfg);
	void clbkPreStep(double simt, double simdt, double mjd);
	void clbkSaveState(FILEHANDLE scn);
	void clbkLoadStateEx(FILEHANDLE scn, void *vstatus);
	bool clbkDrawHUD(int mode, const HUDPAINTSPEC *hps, oapi::Sketchpad *skp);
	int clbkConsumeBufferedKey(DWORD key, bool down, char *kstate);
private:
	void AddTACS();

	MESHHANDLE SkylabMesh;

	//Thruster Attitude Control System (TACS)
	PROPELLANT_HANDLE ph_tacs;
	THRUSTER_HANDLE th_tacs[6];

	//Systems
	ATMDC atmdc;
};


#endif