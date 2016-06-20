
#include "GCWZEROAudio.h"
#include "GCWZEROAudioDriver.h"
#include "Services/Audio/AudioOutDriver.h"

GCWZEROAudio::GCWZEROAudio(AudioSettings &hints):Audio(hints) 
{
	hints_=hints;
}

GCWZEROAudio::~GCWZEROAudio() 
{
}

void GCWZEROAudio::Init() 
{
  drv=new GCWZEROAudioDriver(hints_) ;
  AudioOut *out=new AudioOutDriver(*drv) ;
  Insert(out) ;
}

void GCWZEROAudio::Close() 
{
  IteratorPtr<AudioOut>it(GetIterator()) ;
  for (it->Begin();!it->IsDone();it->Next())
  {
     AudioOut &current=it->CurrentItem() ;
     current.Close() ;
  }
}

int GCWZEROAudio::GetMixerVolume() 
{
	return drv->GetVolume();
}

void GCWZEROAudio::SetMixerVolume(int volume) 
{
  drv->SetVolume(volume);
}
