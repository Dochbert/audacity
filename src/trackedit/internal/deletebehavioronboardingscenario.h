/*
 * Audacity: A Digital Audio Editor
 */
#pragma once

#include "modularity/ioc.h"
#include "global/iinteractive.h"
#include "actions/iactionsdispatcher.h"
#include "trackedit/itrackeditconfiguration.h"

#include "trackedit/trackedittypes.h"

namespace au::trackedit {
class DeleteBehaviorOnboardingScenario
{
    muse::Inject<muse::IInteractive> interactive;
    muse::Inject<muse::actions::IActionsDispatcher> dispatcher;
    muse::Inject<ITrackeditConfiguration> configuration;

public:
    bool showOnboardingDialog() const;
    void showFollowupDialog() const;

private:
    bool actionExists(const std::string& action) const;
};
}
