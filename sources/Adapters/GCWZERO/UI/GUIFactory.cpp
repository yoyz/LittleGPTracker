#include "GUIFactory.h"
#include "GCWZEROGUIWindowImp.h"


GUIFactory::GUIFactory() {
} ;


I_GUIWindowImp &GUIFactory::CreateWindowImp(GUICreateWindowParams &p) {
	return *(new GCWZEROGUIWindowImp(p)) ;
}
