/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated SignedSource<<58b7a5fa22b58e21dfc953716db9eba6>>
 */

/**
 * IMPORTANT: Do NOT modify this file directly.
 *
 * To change the definition of the flags, edit
 *   packages/react-native/scripts/featureflags/ReactNativeFeatureFlags.config.js.
 *
 * To regenerate this code, run the following script from the repo root:
 *   yarn featureflags-update
 */

#include <react/featureflags/ReactNativeFeatureFlagsDefaults.h>
#include <sstream>
#include <stdexcept>
#include <string>
#include "ReactNativeFeatureFlags.h"

namespace facebook::react {

ReactNativeFeatureFlagsAccessor::ReactNativeFeatureFlagsAccessor()
    : currentProvider_(std::make_unique<ReactNativeFeatureFlagsDefaults>()),
      wasOverridden_(false) {}

bool ReactNativeFeatureFlagsAccessor::commonTestFlag() {
  auto flagValue = commonTestFlag_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(0, "commonTestFlag");

    flagValue = currentProvider_->commonTestFlag();
    commonTestFlag_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::allowCollapsableChildren() {
  auto flagValue = allowCollapsableChildren_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(1, "allowCollapsableChildren");

    flagValue = currentProvider_->allowCollapsableChildren();
    allowCollapsableChildren_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::androidEnablePendingFabricTransactions() {
  auto flagValue = androidEnablePendingFabricTransactions_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(2, "androidEnablePendingFabricTransactions");

    flagValue = currentProvider_->androidEnablePendingFabricTransactions();
    androidEnablePendingFabricTransactions_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::batchRenderingUpdatesInEventLoop() {
  auto flagValue = batchRenderingUpdatesInEventLoop_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(3, "batchRenderingUpdatesInEventLoop");

    flagValue = currentProvider_->batchRenderingUpdatesInEventLoop();
    batchRenderingUpdatesInEventLoop_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::destroyFabricSurfacesInReactInstanceManager() {
  auto flagValue = destroyFabricSurfacesInReactInstanceManager_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(4, "destroyFabricSurfacesInReactInstanceManager");

    flagValue = currentProvider_->destroyFabricSurfacesInReactInstanceManager();
    destroyFabricSurfacesInReactInstanceManager_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableBackgroundExecutor() {
  auto flagValue = enableBackgroundExecutor_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(5, "enableBackgroundExecutor");

    flagValue = currentProvider_->enableBackgroundExecutor();
    enableBackgroundExecutor_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableCleanTextInputYogaNode() {
  auto flagValue = enableCleanTextInputYogaNode_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(6, "enableCleanTextInputYogaNode");

    flagValue = currentProvider_->enableCleanTextInputYogaNode();
    enableCleanTextInputYogaNode_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableMicrotasks() {
  auto flagValue = enableMicrotasks_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(7, "enableMicrotasks");

    flagValue = currentProvider_->enableMicrotasks();
    enableMicrotasks_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableSynchronousStateUpdates() {
  auto flagValue = enableSynchronousStateUpdates_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(8, "enableSynchronousStateUpdates");

    flagValue = currentProvider_->enableSynchronousStateUpdates();
    enableSynchronousStateUpdates_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::enableUIConsistency() {
  auto flagValue = enableUIConsistency_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(9, "enableUIConsistency");

    flagValue = currentProvider_->enableUIConsistency();
    enableUIConsistency_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::fixMountedFlagAndFixPreallocationClone() {
  auto flagValue = fixMountedFlagAndFixPreallocationClone_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(10, "fixMountedFlagAndFixPreallocationClone");

    flagValue = currentProvider_->fixMountedFlagAndFixPreallocationClone();
    fixMountedFlagAndFixPreallocationClone_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::forceBatchingMountItemsOnAndroid() {
  auto flagValue = forceBatchingMountItemsOnAndroid_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(11, "forceBatchingMountItemsOnAndroid");

    flagValue = currentProvider_->forceBatchingMountItemsOnAndroid();
    forceBatchingMountItemsOnAndroid_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::inspectorEnableCxxInspectorPackagerConnection() {
  auto flagValue = inspectorEnableCxxInspectorPackagerConnection_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(12, "inspectorEnableCxxInspectorPackagerConnection");

    flagValue = currentProvider_->inspectorEnableCxxInspectorPackagerConnection();
    inspectorEnableCxxInspectorPackagerConnection_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::inspectorEnableModernCDPRegistry() {
  auto flagValue = inspectorEnableModernCDPRegistry_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(13, "inspectorEnableModernCDPRegistry");

    flagValue = currentProvider_->inspectorEnableModernCDPRegistry();
    inspectorEnableModernCDPRegistry_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::preventDoubleTextMeasure() {
  auto flagValue = preventDoubleTextMeasure_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(14, "preventDoubleTextMeasure");

    flagValue = currentProvider_->preventDoubleTextMeasure();
    preventDoubleTextMeasure_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::useModernRuntimeScheduler() {
  auto flagValue = useModernRuntimeScheduler_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(15, "useModernRuntimeScheduler");

    flagValue = currentProvider_->useModernRuntimeScheduler();
    useModernRuntimeScheduler_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::useNativeViewConfigsInBridgelessMode() {
  auto flagValue = useNativeViewConfigsInBridgelessMode_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(16, "useNativeViewConfigsInBridgelessMode");

    flagValue = currentProvider_->useNativeViewConfigsInBridgelessMode();
    useNativeViewConfigsInBridgelessMode_ = flagValue;
  }

  return flagValue.value();
}

bool ReactNativeFeatureFlagsAccessor::useStateAlignmentMechanism() {
  auto flagValue = useStateAlignmentMechanism_.load();

  if (!flagValue.has_value()) {
    // This block is not exclusive but it is not necessary.
    // If multiple threads try to initialize the feature flag, we would only
    // be accessing the provider multiple times but the end state of this
    // instance and the returned flag value would be the same.

    markFlagAsAccessed(17, "useStateAlignmentMechanism");

    flagValue = currentProvider_->useStateAlignmentMechanism();
    useStateAlignmentMechanism_ = flagValue;
  }

  return flagValue.value();
}

void ReactNativeFeatureFlagsAccessor::override(
    std::unique_ptr<ReactNativeFeatureFlagsProvider> provider) {
  if (wasOverridden_) {
    throw std::runtime_error(
        "Feature flags cannot be overridden more than once");
  }

  ensureFlagsNotAccessed();
  wasOverridden_ = true;
  currentProvider_ = std::move(provider);
}

void ReactNativeFeatureFlagsAccessor::markFlagAsAccessed(
    int position,
    const char* flagName) {
  accessedFeatureFlags_[position] = flagName;
}

void ReactNativeFeatureFlagsAccessor::ensureFlagsNotAccessed() {
  std::ostringstream featureFlagListBuilder;
  for (const auto& featureFlagName : accessedFeatureFlags_) {
    if (featureFlagName != nullptr) {
      featureFlagListBuilder << featureFlagName << ", ";
    }
  }

  std::string accessedFeatureFlagNames = featureFlagListBuilder.str();
  if (!accessedFeatureFlagNames.empty()) {
    accessedFeatureFlagNames =
        accessedFeatureFlagNames.substr(0, accessedFeatureFlagNames.size() - 2);
  }

  if (!accessedFeatureFlagNames.empty()) {
    throw std::runtime_error(
        "Feature flags were accessed before being overridden: " +
        accessedFeatureFlagNames);
  }
}

} // namespace facebook::react
