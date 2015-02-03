#ifndef CONNECTOR_H
#define CONNECTOR_H

#include "../PeerManager.hpp"
#include "../../common/Temporizable.hpp"
#include "../../common/Strategy/Strategy.hpp"

class Connector : public Temporizable
{
	private:
		Strategy *strategy;
		PeerManager* peerManager;
		set<string>* peerActive;
		boost::mutex* peerActiveMutex;

    public:
		Connector(Strategy *disconnectorStrategy, PeerManager* peerManager, uint64_t timerPeriod, set<string>* peerActive, boost::mutex* peerActiveMutex);
		void Connect();
		void TimerAlarm(uint64_t timerPeriod, string timerName);
};

#endif
