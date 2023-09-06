/***************************************************************************
This file is part of Project Apollo - NASSP
Copyright 2019

Base Class for Electrical Support Equipment for the S-IB and S-IC Stages (Header)

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

class TailUmbilical;
class LCCPadInterface;

#include "Orbitersdk.h"

class SI_ESE
{
public:
	SI_ESE(TailUmbilical *TailUmb, LCCPadInterface *p);
	virtual ~SI_ESE();

	virtual bool GetSIThrustOKSimulate(int eng, int n) = 0;

	virtual void Timestep() = 0;
	virtual void SaveState(FILEHANDLE scn) = 0;
	virtual void LoadState(FILEHANDLE scn) = 0;
protected:
	TailUmbilical *Umbilical;
	LCCPadInterface *Pad;
};