#ifndef DISCONNECTOR_H
#define DISCONNECTOR_H

#include "../PeerManager.hpp"
#include "../../common/Temporizable.hpp"
#include "../../common/Strategy/Strategy.hpp"

class Disconnector : public Temporizable
{
	private:
		Strategy *strategy;
		PeerManager* peerManager;
		set<string>* peerActive;

    public:
		Disconnector(Strategy *disconnectorStrategy, PeerManager* peerManager, uint64_t timerPeriod, set<string>* peerActive);
		void Disconnect();
		void TimerAlarm(uint64_t timerPeriod, string timerName);
};

#endif
