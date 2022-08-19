*  The outputs can drive headphones directly, or add a simple audio amplifier to drive a loudspeaker.
 */
#include <Arduino.h>

#include "Talkie.h"
#include "Vocab_US_Large.h"

Talkie voice;

void setup() {
//    voice.doNotUseUseInvertedOutput();
#if defined(CORE_TEENSY)
    pinMode(5, OUTPUT);
    digitalWrite(5, HIGH); //Enable Amplified PROP shield
#endif
}

void loop() {
    voice.say(sp2_ZERO);
    voice.say(sp2_ONE);
    voice.say(sp2_TWO);
    voice.say(sp2_THREE);
    voice.say(sp2_FOUR);
    voice.say(sp2_FIVE);
    voice.say(sp2_SIX);
    voice.say(sp2_SEVEN);
    voice.say(sp2_EIGHT);
    voice.say(sp2_NINE);
}
