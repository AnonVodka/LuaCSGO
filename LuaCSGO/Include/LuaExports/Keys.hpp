#pragma once

#include <string>
#include <unordered_map>
#include "luabind/luabind.hpp"

#include "Events.hpp"

namespace LuaCSGO
{
#define EXPORTKEY(key, value)								\
	do{														\
	luabind::globals( L )[key] = value;						\
	_keymap.insert(std::pair<int,std::string>(value,key));	\
	}while(false)

	class Keys {
		std::unordered_map<int, std::string> _keymap;
	public:

		inline void Export( lua_State* L ) {
			EXPORTKEY( "KEY_NONE", LUACSGO_KEY_NONE );
			EXPORTKEY( "BUTTON_LEFT", LUACSGO_BUTTON_LEFT );
			EXPORTKEY( "BUTTON_RIGHT", LUACSGO_BUTTON_RIGHT );
			EXPORTKEY( "BUTTON_MIDDLE", LUACSGO_BUTTON_MIDDLE );
			EXPORTKEY( "BUTTON_MOUSE4", LUACSGO_BUTTON_MOUSE4 );
			EXPORTKEY( "BUTTON_MOUSE5", LUACSGO_BUTTON_MOUSE5 );
			EXPORTKEY( "KEY_BACK", LUACSGO_KEY_BACK );
			EXPORTKEY( "KEY_TAB", LUACSGO_KEY_TAB );
			EXPORTKEY( "KEY_CLEAR", LUACSGO_KEY_CLEAR );
			EXPORTKEY( "KEY_RETURN", LUACSGO_KEY_RETURN );
			EXPORTKEY( "KEY_SHIFT", LUACSGO_KEY_SHIFT );
			EXPORTKEY( "KEY_CONTROL", LUACSGO_KEY_CONTROL );
			EXPORTKEY( "KEY_ALT", LUACSGO_KEY_ALT );
			EXPORTKEY( "KEY_PAUSE", LUACSGO_KEY_PAUSE );
			EXPORTKEY( "KEY_CAPITAL", LUACSGO_KEY_CAPITAL );
			EXPORTKEY( "KEY_ESCAPE", LUACSGO_KEY_ESCAPE );
			EXPORTKEY( "KEY_SPACE", LUACSGO_KEY_SPACE );
			EXPORTKEY( "KEY_PRIOR", LUACSGO_KEY_PRIOR );
			EXPORTKEY( "KEY_NEXT", LUACSGO_KEY_NEXT );
			EXPORTKEY( "KEY_END", LUACSGO_KEY_END );
			EXPORTKEY( "KEY_HOME", LUACSGO_KEY_HOME );
			EXPORTKEY( "KEY_LEFT", LUACSGO_KEY_LEFT );
			EXPORTKEY( "KEY_UP", LUACSGO_KEY_UP );
			EXPORTKEY( "KEY_RIGHT", LUACSGO_KEY_RIGHT );
			EXPORTKEY( "KEY_DOWN", LUACSGO_KEY_DOWN );
			EXPORTKEY( "KEY_PRINT", LUACSGO_KEY_PRINT );
			EXPORTKEY( "KEY_INSERT", LUACSGO_KEY_INSERT );
			EXPORTKEY( "KEY_DELETE", LUACSGO_KEY_DELETE );
			EXPORTKEY( "KEY_0", LUACSGO_KEY_0 );
			EXPORTKEY( "KEY_1", LUACSGO_KEY_1 );
			EXPORTKEY( "KEY_2", LUACSGO_KEY_2 );
			EXPORTKEY( "KEY_3", LUACSGO_KEY_3 );
			EXPORTKEY( "KEY_4", LUACSGO_KEY_4 );
			EXPORTKEY( "KEY_5", LUACSGO_KEY_5 );
			EXPORTKEY( "KEY_6", LUACSGO_KEY_6 );
			EXPORTKEY( "KEY_7", LUACSGO_KEY_7 );
			EXPORTKEY( "KEY_8", LUACSGO_KEY_8 );
			EXPORTKEY( "KEY_9", LUACSGO_KEY_9 );
			EXPORTKEY( "KEY_A", LUACSGO_KEY_A );
			EXPORTKEY( "KEY_B", LUACSGO_KEY_B );
			EXPORTKEY( "KEY_C", LUACSGO_KEY_C );
			EXPORTKEY( "KEY_D", LUACSGO_KEY_D );
			EXPORTKEY( "KEY_E", LUACSGO_KEY_E );
			EXPORTKEY( "KEY_F", LUACSGO_KEY_F );
			EXPORTKEY( "KEY_G", LUACSGO_KEY_G );
			EXPORTKEY( "KEY_H", LUACSGO_KEY_H );
			EXPORTKEY( "KEY_I", LUACSGO_KEY_I );
			EXPORTKEY( "KEY_J", LUACSGO_KEY_J );
			EXPORTKEY( "KEY_K", LUACSGO_KEY_K );
			EXPORTKEY( "KEY_L", LUACSGO_KEY_L );
			EXPORTKEY( "KEY_M", LUACSGO_KEY_M );
			EXPORTKEY( "KEY_N", LUACSGO_KEY_N );
			EXPORTKEY( "KEY_O", LUACSGO_KEY_O );
			EXPORTKEY( "KEY_P", LUACSGO_KEY_P );
			EXPORTKEY( "KEY_Q", LUACSGO_KEY_Q );
			EXPORTKEY( "KEY_R", LUACSGO_KEY_R );
			EXPORTKEY( "KEY_S", LUACSGO_KEY_S );
			EXPORTKEY( "KEY_T", LUACSGO_KEY_T );
			EXPORTKEY( "KEY_U", LUACSGO_KEY_U );
			EXPORTKEY( "KEY_V", LUACSGO_KEY_V );
			EXPORTKEY( "KEY_W", LUACSGO_KEY_W );
			EXPORTKEY( "KEY_X", LUACSGO_KEY_X );
			EXPORTKEY( "KEY_Y", LUACSGO_KEY_Y );
			EXPORTKEY( "KEY_Z", LUACSGO_KEY_Z );
			EXPORTKEY( "KEY_LWIN", LUACSGO_KEY_LWIN );
			EXPORTKEY( "KEY_RWIN", LUACSGO_KEY_RWIN );
			EXPORTKEY( "KEY_APPS", LUACSGO_KEY_APPS );
			EXPORTKEY( "KEY_SLEEP", LUACSGO_KEY_SLEEP );
			EXPORTKEY( "KEY_NUMPAD0", LUACSGO_KEY_NUMPAD0 );
			EXPORTKEY( "KEY_NUMPAD1", LUACSGO_KEY_NUMPAD1 );
			EXPORTKEY( "KEY_NUMPAD2", LUACSGO_KEY_NUMPAD2 );
			EXPORTKEY( "KEY_NUMPAD3", LUACSGO_KEY_NUMPAD3 );
			EXPORTKEY( "KEY_NUMPAD4", LUACSGO_KEY_NUMPAD4 );
			EXPORTKEY( "KEY_NUMPAD5", LUACSGO_KEY_NUMPAD5 );
			EXPORTKEY( "KEY_NUMPAD6", LUACSGO_KEY_NUMPAD6 );
			EXPORTKEY( "KEY_NUMPAD7", LUACSGO_KEY_NUMPAD7 );
			EXPORTKEY( "KEY_NUMPAD8", LUACSGO_KEY_NUMPAD8 );
			EXPORTKEY( "KEY_NUMPAD9", LUACSGO_KEY_NUMPAD9 );
			EXPORTKEY( "KEY_MULTIPLY", LUACSGO_KEY_MULTIPLY );
			EXPORTKEY( "KEY_ADD", LUACSGO_KEY_ADD );
			EXPORTKEY( "KEY_SEPARATOR", LUACSGO_KEY_SEPARATOR );
			EXPORTKEY( "KEY_SUBTRACT", LUACSGO_KEY_SUBTRACT );
			EXPORTKEY( "KEY_DECIMAL", LUACSGO_KEY_DECIMAL );
			EXPORTKEY( "KEY_DIVIDE", LUACSGO_KEY_DIVIDE );
			EXPORTKEY( "KEY_F1", LUACSGO_KEY_F1 );
			EXPORTKEY( "KEY_F2", LUACSGO_KEY_F2 );
			EXPORTKEY( "KEY_F3", LUACSGO_KEY_F3 );
			EXPORTKEY( "KEY_F4", LUACSGO_KEY_F4 );
			EXPORTKEY( "KEY_F5", LUACSGO_KEY_F5 );
			EXPORTKEY( "KEY_F6", LUACSGO_KEY_F6 );
			EXPORTKEY( "KEY_F7", LUACSGO_KEY_F7 );
			EXPORTKEY( "KEY_F8", LUACSGO_KEY_F8 );
			EXPORTKEY( "KEY_F9", LUACSGO_KEY_F9 );
			EXPORTKEY( "KEY_F10", LUACSGO_KEY_F10 );
			EXPORTKEY( "KEY_F11", LUACSGO_KEY_F11 );
			EXPORTKEY( "KEY_F12", LUACSGO_KEY_F12 );
			EXPORTKEY( "KEY_LMENU", LUACSGO_KEY_LMENU );
			EXPORTKEY( "KEY_RMENU", LUACSGO_KEY_RMENU );
			EXPORTKEY( "KEY_OEM_1", LUACSGO_KEY_OEM_1 );		//');:'forUS
			EXPORTKEY( "KEY_OEM_PLUS", LUACSGO_KEY_OEM_PLUS );	//'+'anycountry
			EXPORTKEY( "KEY_OEM_COMMA", LUACSGO_KEY_OEM_COMMA );	//');'anycountry
			EXPORTKEY( "KEY_OEM_MINUS", LUACSGO_KEY_OEM_MINUS );	//'-'anycountry
			EXPORTKEY( "KEY_OEM_PERIOD", LUACSGO_KEY_OEM_PERIOD );	//'.'anycountry
			EXPORTKEY( "KEY_OEM_2", LUACSGO_KEY_OEM_2 );		//'/?'forUS
			EXPORTKEY( "KEY_OEM_3", LUACSGO_KEY_OEM_3 );		//'`~'forUS
			EXPORTKEY( "KEY_OEM_4", LUACSGO_KEY_OEM_4 );		//'[{'forUS
			EXPORTKEY( "KEY_OEM_5", LUACSGO_KEY_OEM_5 );		//'\|'forUS
			EXPORTKEY( "KEY_OEM_6", LUACSGO_KEY_OEM_6 );		//']}'forUS
			EXPORTKEY( "KEY_OEM_7", LUACSGO_KEY_OEM_7 );		//''"'forUS
			EXPORTKEY( "KEY_OEM_8", LUACSGO_KEY_OEM_8 );
		}

		const char* LookupKeyString( int keycode ) {
			auto it = _keymap.find( keycode );
			if(it == _keymap.end()) return "KEY_UNKNOWN";
			else return _keymap[keycode].c_str();
		}
	};
}