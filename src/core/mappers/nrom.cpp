/**
 * @file
 *
 * Defines NROM class and factories
 */
/*
 NES Emulator
 Copyright (C) 2012-2017  Ivanov Viktor

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License along
 with this program; if not, write to the Free Software Foundation, Inc.,
 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <vpnes/vpnes.hpp>
#include <vpnes/core/factory.hpp>
#include <vpnes/core/mappers/helper.hpp>
#include <vpnes/core/mappers/nrom.hpp>

using namespace ::vpnes;
using namespace ::vpnes::core;
using namespace ::vpnes::core::factory;

/**
 * NROM NES factory
 *
 * @param config NES config
 * @param frontEnd Front-end
 * @return NES
 */
CNES *factory::factoryNROM(SNESConfig *config, CFrontEnd *frontEnd) {
	return factoryNES<CNROM>(config, frontEnd);
}