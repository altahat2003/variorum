// Copyright 2019-2022 Lawrence Livermore National Security, LLC and other
// Variorum Project Developers. See the top-level LICENSE file for details.
//
// SPDX-License-Identifier: MIT

#ifndef POWER_FEATURES_H_INCLUDE
#define POWER_FEATURES_H_INCLUDE

#include <stdint.h>
#include <stdio.h>

#include <libapmidg.h>

void initAPMIDG(void);
void shutdownAPMIDG(void);
void get_power_data(int chipid, int verbose, FILE *output);
void get_thermal_data(int chipid, int verbose, FILE *output);
void get_clocks_data(int chipid, int verbose, FILE *output);

#endif