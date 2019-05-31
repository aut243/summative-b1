/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class BruceA2AudioProcessorEditor  : public AudioProcessorEditor, Slider::Listener
{
public:
    BruceA2AudioProcessorEditor (BruceA2AudioProcessor&);
    ~BruceA2AudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

    Random random;
    Image vinylBackground;
    
    
private:
    
    
    
    BruceA2AudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BruceA2AudioProcessorEditor)
};
