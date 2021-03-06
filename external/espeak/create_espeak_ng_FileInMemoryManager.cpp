/* espeak_ng_createFileInMemoryManager.cpp
 * This file was automatically created.
 * Espeak-ng version: 1.49.3-dev.
 * Date: Fri Nov  3 14:56:28 2017.
*/

#include "espeakdata_FileInMemory.h"

autoFileInMemoryManager create_espeak_ng_FileInMemoryManager () {
	try{
		autoFileInMemorySet espeak_ng = create_espeak_ng_FileInMemorySet ();
		autoFileInMemoryManager me = FileInMemoryManager_create (espeak_ng.get());
		return me;
	} catch (MelderError) {
		Melder_throw (U"FileInMemoryManager for espeak-ng not created.");
	}
}
