# GLoBES -- General LOng Baseline Experiment Simulator
# (C) 2002 - 2004,  The GLoBES Team
#
# GLoBES is mainly intended for academic purposes. Proper
# credit must be given if you use GLoBES or parts of it. Please
# read the section 'Credit' in the README file.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

# The configure script should have replaced anything as required to
# obtain a working Makefile, which may serve as a template for own
# applications.
#
# This simple Makefile is for the GLoBES examples
#
# Compile example files with ``make example1'' etc.
#
# This Makefile assumes dynamic libraries, installed to either
# the default prefix /usr/local/ or to a user-defined directory 
# called ${prefix}.
#
# For linking against a specific version of GLoBES, libglobes.so can be 
# replaced by the respective library, such as libglobes.so.0.0.1



prefix = /usr/local
exec_prefix = /usr/local
libdir = ${exec_prefix}/lib
globesconf= $(exec_prefix)/bin/globes-config

local_CFLAGS = -g -O4

INCFLAGS:=$(shell $(globesconf) --include)
local_LDFLAGS:=$(shell $(globesconf) --libs)
preopen_modules:=$(shell $(globesconf) --dlpreopen)
local_LTLDFLAGS:=$(shell $(globesconf) --ltlibs)
ifdef preopen_modules
predefs = -DGLB_STATIC
endif



BIN = th13delta th13delta_wreactor theta13_proj theta13_proj_wreactor deltacp_proj deltacp_proj_wreactor osc_prob osc_prob_mu2e

OBJ = th13delta.o th13delta_wreactor.o theta13_proj.o theta13_proj_wreactor.o deltacp_proj.o deltacp_proj_wreactor.o osc_prob.o osc_prob_mu2e.o

all: $(BIN)

th13delta: th13delta.o
	gcc th13delta.o -o th13delta $(LDFLAGS) $(local_LDFLAGS)

th13delta_wreactor: th13delta_wreactor.o
	 gcc th13delta_wreactor.o -o th13delta_wreactor $(LDFLAGS) $(local_LDFLAGS)

theta13_proj: theta13_proj.o
	gcc theta13_proj.o -o theta13_proj $(LDFLAGS) $(local_LDFLAGS)

theta13_proj_wreactor: theta13_proj_wreactor.o
	gcc theta13_proj_wreactor.o -o theta13_proj_wreactor $(LDFLAGS) $(local_LDFLAGS)

deltacp_proj: deltacp_proj.o
	gcc deltacp_proj.o -o deltacp_proj $(LDFLAGS) $(local_LDFLAGS)

deltacp_proj_wreactor: deltacp_proj_wreactor.o
	gcc deltacp_proj_wreactor.o -o deltacp_proj_wreactor $(LDFLAGS) $(local_LDFLAGS)

osc_prob: osc_prob.o
	gcc osc_prob.o -o osc_prob $(LDFLAGS) $(local_LDFLAGS)

osc_prob_mu2e: osc_prob_mu2e.o
	gcc osc_prob_mu2e.o -o osc_prob_mu2e $(LDFLAGS) $(local_LDFLAGS)

%.o : %.c
	gcc $(CFLAGS) $(local_CFLAGS) -c $< $(INCFLAGS)
.PHONY: clean
clean:
	rm -f $(BIN) $(OBJ)
