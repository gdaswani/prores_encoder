#pragma once

#ifndef PRORES_PX_H_
#define PRORES_PX_H_

#include "uisettings_controller.h"
#include "prores_encoder.h"
#include "prores_worker.h"

#include <memory>

using namespace IOPlugin;

namespace IOPlugin {

	class ProResPXEncoder final : public ProResEncoder
	{
	public:
		static const uint8_t s_UUID[];
		static const ProfileMap s_ProfileMap[1];

	public:
		ProResPXEncoder();
		~ProResPXEncoder();

		static StatusCode s_RegisterCodecs(HostListRef* p_pList);
		static StatusCode s_GetEncoderSettings(HostPropertyCollectionRef* p_pValues, HostListRef* p_pSettingsList);
	};

}

#endif // PRORES_PX_H_