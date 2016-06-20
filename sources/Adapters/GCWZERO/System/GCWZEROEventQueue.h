#ifndef _GCWZERO_EVENT_QUEUE_H_
#define _GCWZERO_EVENT_QUEUE_H_

#include "Foundation/T_Singleton.h"
#include "Foundation/T_Stack.h"

enum GCWZEROEventType {
     GCWZEROET_REDRAW
} ;

class GCWZEROEvent {
public:
      GCWZEROEventType type_;
} ;

class GCWZEROEventQueue: public T_Singleton<GCWZEROEventQueue>,public T_Stack<GCWZEROEvent> {
public:
      GCWZEROEventQueue() ;
} ;

#endif
