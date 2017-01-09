----------------------------------------------
# dssp (with MD trajectory analysis capabilites)
----------------------------------------------

This is a modified version of the software DSSP-2.2.1 (http://swift.cmbi.ru.nl/gv/dssp/)

It can process Molecular Dynamics trajectories in the DCD format, from CHARMM, NAMD or X-PLOR (only CHARMM tested)

see README.orig.txt from the initial author, i.e. Maarten L. Hekkelman.

Code for reading DCD files comes from https://github.com/FHedin/read_dcd

----------------------------------------------
## COMPILE & INSTALL
----------------------------------------------

A C++ compiler compatible with standard c++2011 is required.

Requires the Boost c++ library.

Use the provided makefile for compiling ; edit the make.config if the path to Boost Libraries need to be precised.

----------------------------------------------
## LICENSING
----------------------------------------------

Original work from Maarten L. Hekkelman ==> Distributed under the Boost Software License, Version 1.0 ; see LICENSE.orig.txt

Code for reading DCD files, from Florent Hedin ==>  Distributed under GNU General Public License version 3 or later
