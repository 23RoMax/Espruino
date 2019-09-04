/*
 * This file is part of Espruino, a JavaScript interpreter for Microcontrollers
 *
 * Copyright (C) 2016 Gordon Williams <gw@pur3.co.uk>
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * ----------------------------------------------------------------------------
* Contains JavaScript interface for Pixl.js (http://www.espruino.com/Pixl.js)
 * ----------------------------------------------------------------------------
 */
#include "jspin.h"

void jswrap_hackstrap_lcdw(JsVarInt cmd, JsVar *data);
void jswrap_hackstrap_setContrast(JsVarFloat c);
void jswrap_hackstrap_setLCDPower(bool isOn);

void jswrap_hackstrap_init();
void jswrap_hackstrap_kill();
bool jswrap_hackstrap_idle();
