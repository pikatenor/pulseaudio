#ifndef foodumpmoduleshfoo
#define foodumpmoduleshfoo

/***
  This file is part of PulseAudio.

  Copyright 2004-2006 Lennart Poettering

  PulseAudio is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published
  by the Free Software Foundation; either version 2.1 of the License,
  or (at your option) any later version.

  PulseAudio is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with PulseAudio; if not, see <http://www.gnu.org/licenses/>.
***/

#include "daemon-conf.h"

/* Dump all available modules to STDOUT. If argc > 0 print information
 * about the modules specified in argv[] instead. */
void pa_dump_modules(pa_daemon_conf *c, int argc, char * const argv[]);

#endif
