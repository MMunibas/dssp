// Copyright Maarten L. Hekkelman, Radboud University 2008-2011.
//   Distributed under the Boost Software License, Version 1.0.
//       (See accompanying file LICENSE_1_0.txt or copy at    
//             http://www.boost.org/LICENSE_1_0.txt)      

#pragma once

#include <iostream>

class MProtein;
class MResidue;

// Write the DSSP line for a single residue
std::string ResidueToDSSPLine(const MResidue& residue);

// Write a complete DSSP file for a protein
void WriteDSSP(MProtein& protein, std::ostream& os);

// a shorter version useful when analysing a trajectory
void WriteDSSP_short(MProtein& protein, std::ostream& os);

// an even shorter version producing a csv like file
void WriteDSSP_ultra_short_csv(MProtein& protein, std::ostream& os);
