#pragma once

#include "Services/Audio/Audio.h"
#include "GCWZEROAudioDriver.h"

class GCWZEROAudio: public Audio
{
public:
	GCWZEROAudio(AudioSettings &hints) ; // Allow for different default size for different platform
	~GCWZEROAudio() ;
	virtual void Init() ;
	virtual void Close() ;
	virtual int GetMixerVolume() ;
	virtual void SetMixerVolume(int volume) ;
private:
	GCWZEROAudioDriver *drv;	
	AudioSettings hints_ ;
};
