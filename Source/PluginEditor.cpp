/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
BruceA2AudioProcessorEditor::BruceA2AudioProcessorEditor (BruceA2AudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    

}

BruceA2AudioProcessorEditor::~BruceA2AudioProcessorEditor()
{
}


void BruceA2AudioProcessorEditor::paint (Graphics& g)
{
    //setting our vinyl image design as background image
      vinylBackground = ImageCache::getFromMemory(BinaryData::vinyl_plugin_background_png, BinaryData::vinyl_plugin_background_pngSize);
    
    g.drawImageWithin(vinylBackground, 0, 0, getWidth(), getHeight(), RectanglePlacement::fillDestination);
  
}

void BruceA2AudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    //subcomponents in your editor..
 
}


        
        



