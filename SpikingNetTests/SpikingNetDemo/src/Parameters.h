//
//  ConstParams.h
//  SpikingNeuronsSimulator_Robot
//
// Copyright 2020, Atsushi Masumori, Alexandre Saunier, Simon Demeule
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#ifndef SpikingNeuronsSimulator_Robot_ConstParams_h
#define SpikingNeuronsSimulator_Robot_ConstParams_h

#include <iostream>
#include <stdlib.h>
#include <time.h>

class ConstParams
{
public:
    static int Number_Of_Neurons;
    static int Number_Of_Inhibitory;
    static int Number_Of_Connection;
    static int Input_Neuron_Size;
    static int Input_Group_Size;
    static int Output_Neuron_Size;
    static int Output_Group_Size;
    static int Network_Type;
    static const int Excitatory_Neuron_Type;
    static const int Inhibitory_Neuron_Type;

    static double Init_Weight_Ratio_Exc;
    static double Init_Weight_Ratio_Inh;
    static double Weight_Max;
    static double Weight_Min;
    
    static double Noise_Ratio_Exc;
    static double Noise_Ratio_Inh;
    static int Stim_Rate;
    static double Stim_Strength;
    static const double Decay_Rate;
    
    static bool Stp_Flag;
    static bool Stdp_Flag;
    static bool Decay_Flag;
    static bool Direct_Connection_Flag;
    
    static int Random_Seed;
    static bool Random_Device_Flag;
    static bool Debug_Flag;
    static bool Show_Msg_Flag;
    static const bool SaveSpikes;
    static const bool SaveWeights;

    static const int Regular_Spiking_Demo = 1;
    static const int Resonator_Demo = 2;
    static const int Regular_Spiking = 3;
    static const int Resonator = 4;
    static const int Chattering = 5;
    
    static const int Random_Network  = 0;
    static const int Sparse_Network  = 1;
    static const int Uniform_Network = 2;
    
    virtual ~ConstParams(){}
};

#endif

