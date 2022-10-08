/****************************************************************************
This file is part of Project Apollo - NASSP
Copyright 2022

MCC for Mission H1 (Header)

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

// MISSION STATES: MISSION H1

//Ground liftoff time update to TLI Simulation
#define MST_H1_INSERTION		10
//TLI Simulation to TLI+90 PAD
#define MST_H1_EPO1			11
//TLI+90 Maneuver PAD to TLI+5h P37 PAD
#define MST_H1_EPO2			12
#define MST_H1_EPO3			13
#define MST_H1_EPO4			14
#define MST_H1_TRANSLUNAR1	20
#define MST_H1_TRANSLUNAR2	21
#define MST_H1_TRANSLUNAR3	22
#define MST_H1_TRANSLUNAR4	23
#define MST_H1_TRANSLUNAR5	24
#define MST_H1_TRANSLUNAR6	25
#define MST_H1_TRANSLUNAR7	26
#define MST_H1_TRANSLUNAR_NO_MCC1_1	27
#define MST_H1_TRANSLUNAR_NO_MCC1_2	28
#define MST_H1_TRANSLUNAR8	29
#define MST_H1_TRANSLUNAR9	30
#define MST_H1_TRANSLUNAR10	31
#define MST_H1_TRANSLUNAR11	32
#define MST_H1_TRANSLUNAR12	33
#define MST_H1_TRANSLUNAR13	34
#define MST_H1_TRANSLUNAR14	35
#define MST_H1_TRANSLUNAR15	36
#define MST_H1_TRANSLUNAR_NO_MCC4_1 37
#define MST_H1_TRANSLUNAR_NO_MCC4_2 38
#define MST_H1_TRANSLUNAR_NO_MCC4_3 39
#define MST_H1_TRANSLUNAR16	40
#define MST_H1_TRANSLUNAR17	41
#define MST_H1_TRANSLUNAR18	42
#define MST_H1_TRANSLUNAR19	43
#define MST_H1_TRANSLUNAR20	44
#define MST_H1_TRANSLUNAR21	45
#define MST_H1_TRANSLUNAR22	46
#define MST_H1_LUNAR_ORBIT_LOI_DAY_1 100
#define MST_H1_LUNAR_ORBIT_LOI_DAY_2 101
#define MST_H1_LUNAR_ORBIT_LOI_DAY_3 102
#define MST_H1_LUNAR_ORBIT_LOI_DAY_4 103
#define MST_H1_LUNAR_ORBIT_LOI_DAY_5 104
#define MST_H1_LUNAR_ORBIT_LOI_DAY_6 105
#define MST_H1_LUNAR_ORBIT_LOI_DAY_7 106
#define MST_H1_LUNAR_ORBIT_LOI_DAY_8 107
#define MST_H1_LUNAR_ORBIT_PDI_DAY_1 110
#define MST_H1_LUNAR_ORBIT_PDI_DAY_2 111
#define MST_H1_LUNAR_ORBIT_PDI_DAY_3 112
#define MST_H1_LUNAR_ORBIT_PDI_DAY_4 113
#define MST_H1_LUNAR_ORBIT_PDI_DAY_5 114
#define MST_H1_LUNAR_ORBIT_PDI_DAY_6 115
#define MST_H1_LUNAR_ORBIT_PDI_DAY_7 116
#define MST_H1_LUNAR_ORBIT_PDI_DAY_8 117
#define MST_H1_LUNAR_ORBIT_PDI_DAY_9 118
#define MST_H1_LUNAR_ORBIT_PDI_DAY_10 119
#define MST_H1_LUNAR_ORBIT_PDI_DAY_11 120
#define MST_H1_LUNAR_ORBIT_PDI_DAY_12 121
#define MST_H1_LUNAR_ORBIT_PDI_DAY_13 122
#define MST_H1_LUNAR_ORBIT_PDI_DAY_14 123
#define MST_H1_LUNAR_ORBIT_PDI_DAY_15 124
#define MST_H1_LUNAR_ORBIT_PRE_DOI_1 130
#define MST_H1_LUNAR_ORBIT_PRE_DOI_2 131
#define MST_H1_LUNAR_ORBIT_PRE_DOI_3 132
#define MST_H1_LUNAR_ORBIT_PRE_DOI_4 133
#define MST_H1_LUNAR_ORBIT_PRE_PDI_1 134
#define MST_H1_LUNAR_ORBIT_PRE_PDI_2 135
#define MST_H1_LUNAR_ORBIT_PRE_LANDING_1 136
#define MST_H1_LUNAR_ORBIT_NO_PDI        137
#define MST_H1_LUNAR_ORBIT_POST_LANDING_1 140
#define MST_H1_LUNAR_ORBIT_POST_LANDING_2 141
#define MST_H1_LUNAR_ORBIT_POST_LANDING_3 142
#define MST_H1_LUNAR_ORBIT_POST_LANDING_4 143
#define MST_H1_LUNAR_ORBIT_POST_LANDING_5 144
#define MST_H1_LUNAR_ORBIT_POST_LANDING_6 145
#define MST_H1_LUNAR_ORBIT_POST_LANDING_7 146
#define MST_H1_LUNAR_ORBIT_POST_LANDING_8 147
#define MST_H1_LUNAR_ORBIT_POST_LANDING_9 148
#define MST_H1_LUNAR_ORBIT_PLANE_CHANGE_1 149
#define MST_H1_LUNAR_ORBIT_PLANE_CHANGE_2 150
#define MST_H1_LUNAR_ORBIT_NO_PLANE_CHANGE_1 151
#define MST_H1_LUNAR_ORBIT_EVA_DAY_1 152
#define MST_H1_LUNAR_ORBIT_EVA_DAY_2 153
#define MST_H1_LUNAR_ORBIT_EVA_DAY_3 154
#define MST_H1_LUNAR_ORBIT_EVA_DAY_4 155
#define MST_H1_LUNAR_ORBIT_EVA_DAY_5 156
#define MST_H1_LUNAR_ORBIT_EVA_DAY_6 157
#define MST_H1_LUNAR_ORBIT_EVA_DAY_7 158
#define MST_H1_LUNAR_ORBIT_EVA_DAY_8 159
#define MST_H1_LUNAR_ORBIT_EVA_DAY_9 160
#define MST_H1_LUNAR_ORBIT_EVA_DAY_10 161
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_1 162
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_2 163
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_3 164
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_4 165
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_5 166
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_6 167
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_7 168
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_8 169
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_9 170
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_10 171
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_11 172
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_12 173
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_13 174
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_14 175
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_15 176
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_16 177
#define MST_H1_LUNAR_ORBIT_ASCENT_DAY_17 178
#define MST_H1_LUNAR_ORBIT_PC2_DAY_1 180
#define MST_H1_LUNAR_ORBIT_PC2_DAY_2 181
#define MST_H1_LUNAR_ORBIT_PC2_DAY_3 182
#define MST_H1_LUNAR_ORBIT_PC2_DAY_4 183
#define MST_H1_LUNAR_ORBIT_PC2_DAY_5 184
#define MST_H1_LUNAR_ORBIT_PC2_DAY_6 185
#define MST_H1_LUNAR_ORBIT_PC2_DAY_7 186
#define MST_H1_LUNAR_ORBIT_PC2_DAY_8 187
#define MST_H1_LUNAR_ORBIT_PC2_DAY_9 188
#define MST_H1_LUNAR_ORBIT_PC2_DAY_10 189
#define MST_H1_LUNAR_ORBIT_PC2_DAY_11 190
#define MST_H1_LUNAR_ORBIT_PC2_DAY_12 191
#define MST_H1_LUNAR_ORBIT_PC2_DAY_13 192
#define MST_H1_LUNAR_ORBIT_PC2_DAY_14 193
#define MST_H1_LUNAR_ORBIT_PC2_DAY_15 194
#define MST_H1_TRANSEARTH_1 200
#define MST_H1_TRANSEARTH_2 201
#define MST_H1_TRANSEARTH_3 202
#define MST_H1_TRANSEARTH_4 203
#define MST_H1_TRANSEARTH_5 204
#define MST_H1_TRANSEARTH_6 205
#define MST_H1_TRANSEARTH_7 206
#define MST_H1_TRANSEARTH_8 207
#define MST_H1_TRANSEARTH_9 208
#define MST_H1_TRANSEARTH_10 209
#define MST_H1_TRANSEARTH_11 210

//ABORTS
// Ends at entry interface, goes to entry.
#define MST_H1_ABORT_ORBIT	500
// Abort from earth orbit, goes to MST_ORBIT_ENTRY
#define MST_H1_ABORT		501
// post-TLI abort, ends at abort burn (if any)
// goes to MST_CP_TRANSEARTH with an abort flag.