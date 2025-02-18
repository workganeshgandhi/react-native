/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated SignedSource<<9e91caddfdc8fdf56f9229c2d4c43355>>
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

#pragma once

#include <react/featureflags/ReactNativeFeatureFlagsProvider.h>
#include <array>
#include <atomic>
#include <memory>
#include <optional>

namespace facebook::react {

class ReactNativeFeatureFlagsAccessor {
 public:
  ReactNativeFeatureFlagsAccessor();

  bool commonTestFlag();
  bool allowCollapsableChildren();
  bool androidEnablePendingFabricTransactions();
  bool batchRenderingUpdatesInEventLoop();
  bool destroyFabricSurfacesInReactInstanceManager();
  bool enableBackgroundExecutor();
  bool enableCleanTextInputYogaNode();
  bool enableMicrotasks();
  bool enableSynchronousStateUpdates();
  bool enableUIConsistency();
  bool fixMountedFlagAndFixPreallocationClone();
  bool forceBatchingMountItemsOnAndroid();
  bool inspectorEnableCxxInspectorPackagerConnection();
  bool inspectorEnableModernCDPRegistry();
  bool preventDoubleTextMeasure();
  bool useModernRuntimeScheduler();
  bool useNativeViewConfigsInBridgelessMode();
  bool useStateAlignmentMechanism();

  void override(std::unique_ptr<ReactNativeFeatureFlagsProvider> provider);

 private:
  void markFlagAsAccessed(int position, const char* flagName);
  void ensureFlagsNotAccessed();

  std::unique_ptr<ReactNativeFeatureFlagsProvider> currentProvider_;
  bool wasOverridden_;

  std::array<std::atomic<const char*>, 18> accessedFeatureFlags_;

  std::atomic<std::optional<bool>> commonTestFlag_;
  std::atomic<std::optional<bool>> allowCollapsableChildren_;
  std::atomic<std::optional<bool>> androidEnablePendingFabricTransactions_;
  std::atomic<std::optional<bool>> batchRenderingUpdatesInEventLoop_;
  std::atomic<std::optional<bool>> destroyFabricSurfacesInReactInstanceManager_;
  std::atomic<std::optional<bool>> enableBackgroundExecutor_;
  std::atomic<std::optional<bool>> enableCleanTextInputYogaNode_;
  std::atomic<std::optional<bool>> enableMicrotasks_;
  std::atomic<std::optional<bool>> enableSynchronousStateUpdates_;
  std::atomic<std::optional<bool>> enableUIConsistency_;
  std::atomic<std::optional<bool>> fixMountedFlagAndFixPreallocationClone_;
  std::atomic<std::optional<bool>> forceBatchingMountItemsOnAndroid_;
  std::atomic<std::optional<bool>> inspectorEnableCxxInspectorPackagerConnection_;
  std::atomic<std::optional<bool>> inspectorEnableModernCDPRegistry_;
  std::atomic<std::optional<bool>> preventDoubleTextMeasure_;
  std::atomic<std::optional<bool>> useModernRuntimeScheduler_;
  std::atomic<std::optional<bool>> useNativeViewConfigsInBridgelessMode_;
  std::atomic<std::optional<bool>> useStateAlignmentMechanism_;
};

} // namespace facebook::react
