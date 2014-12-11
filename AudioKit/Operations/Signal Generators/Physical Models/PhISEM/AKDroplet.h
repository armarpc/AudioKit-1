//
//  AKDroplet.h
//  AudioKit
//
//  Auto-generated from scripts by Aurelius Prochazka on 12/11/14.
//  Copyright (c) 2014 Hear For Yourself. All rights reserved.
//

#import "AKAudio.h"
#import "AKParameter+Operation.h"

/** Semi-physical model of a water drop.

 This is one of the PhISEM percussion opcodes. PhISEM (Physically Informed Stochastic Event Modeling) is an algorithmic approach for simulating collisions of multiple independent sound producing objects.
 */

@interface AKDroplet : AKAudio

/// Instantiates the droplet with all values
/// @param intensity The intensity of the dripping sound.
/// @param dampingFactor Damping factor where 0 is no damping and 1 is fully damped.
/// @param energyReturn Amount of energy to add back into the system. The value should be in range 0 to 1.
/// @param mainResonantFrequency The main resonant frequency.
/// @param firstResonantFrequency The first resonant frequency.
/// @param secondResonantFrequency The second resonant frequency.
- (instancetype)initWithIntensity:(AKConstant *)intensity
                    dampingFactor:(AKConstant *)dampingFactor
                     energyReturn:(AKConstant *)energyReturn
            mainResonantFrequency:(AKConstant *)mainResonantFrequency
           firstResonantFrequency:(AKConstant *)firstResonantFrequency
          secondResonantFrequency:(AKConstant *)secondResonantFrequency;

/// Instantiates the droplet with default values
- (instancetype)init;


/// Instantiates the droplet with default values
+ (instancetype)audio;




/// The intensity of the dripping sound. [Default Value: 10]
@property AKConstant *intensity;

/// Set an optional intensity
/// @param intensity The intensity of the dripping sound. [Default Value: 10]
- (void)setOptionalIntensity:(AKConstant *)intensity;


/// Damping factor where 0 is no damping and 1 is fully damped. [Default Value: 0.1]
@property AKConstant *dampingFactor;

/// Set an optional damping factor
/// @param dampingFactor Damping factor where 0 is no damping and 1 is fully damped. [Default Value: 0.1]
- (void)setOptionalDampingFactor:(AKConstant *)dampingFactor;


/// Amount of energy to add back into the system. The value should be in range 0 to 1. [Default Value: 0.5]
@property AKConstant *energyReturn;

/// Set an optional energy return
/// @param energyReturn Amount of energy to add back into the system. The value should be in range 0 to 1. [Default Value: 0.5]
- (void)setOptionalEnergyReturn:(AKConstant *)energyReturn;


/// The main resonant frequency. [Default Value: 450]
@property AKConstant *mainResonantFrequency;

/// Set an optional main resonant frequency
/// @param mainResonantFrequency The main resonant frequency. [Default Value: 450]
- (void)setOptionalMainResonantFrequency:(AKConstant *)mainResonantFrequency;


/// The first resonant frequency. [Default Value: 600]
@property AKConstant *firstResonantFrequency;

/// Set an optional first resonant frequency
/// @param firstResonantFrequency The first resonant frequency. [Default Value: 600]
- (void)setOptionalFirstResonantFrequency:(AKConstant *)firstResonantFrequency;


/// The second resonant frequency. [Default Value: 750]
@property AKConstant *secondResonantFrequency;

/// Set an optional second resonant frequency
/// @param secondResonantFrequency The second resonant frequency. [Default Value: 750]
- (void)setOptionalSecondResonantFrequency:(AKConstant *)secondResonantFrequency;


@end
