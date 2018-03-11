#ifndef GODOT_CPP_PHASHTRANSLATION_HPP
#define GODOT_CPP_PHASHTRANSLATION_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include <Translation.hpp>
namespace godot {

class Translation;

class PHashTranslation : public Translation {
public:

	static void *___get_type_tag();
	static void *___get_base_type_tag();
	static inline const char *___get_class_name() { return (const char *) "PHashTranslation"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o); }

	// enums

	// constants


	static PHashTranslation *_new();

	// methods
	void generate(const Ref<Translation> from);

};

}

#endif