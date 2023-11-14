#pragma once
#include "menu/base/submenu.h"

class network_session_menu : public menu::submenu::submenu {
public:
	static network_session_menu* get();

	void load() override;
	void update_once() override;
	void update() override;
	void feature_update() override;

	network_session_menu()
		: menu::submenu::submenu() {}
};

namespace network::session::vars {
	struct variables {

	};

	extern variables m_vars;
}