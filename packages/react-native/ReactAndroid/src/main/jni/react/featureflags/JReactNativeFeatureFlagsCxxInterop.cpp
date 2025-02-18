/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated SignedSource<<fe78d96a88412c8ae7325e3c9a5028ff>>
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

#include "JReactNativeFeatureFlagsCxxInterop.h"
#include <react/featureflags/ReactNativeFeatureFlags.h>

namespace facebook::react {

static jni::alias_ref<jni::JClass> getReactNativeFeatureFlagsProviderJavaClass() {
  static const auto jClass = facebook::jni::findClassStatic(
      "com/facebook/react/internal/featureflags/ReactNativeFeatureFlagsProvider");
  return jClass;
}

/**
 * Implementation of ReactNativeFeatureFlagsProvider that wraps a
 * ReactNativeFeatureFlagsProvider Java object.
 */
class ReactNativeFeatureFlagsProviderHolder
    : public ReactNativeFeatureFlagsProvider {
 public:
  explicit ReactNativeFeatureFlagsProviderHolder(
      jni::alias_ref<jobject> javaProvider)
      : javaProvider_(make_global(javaProvider)){};

  bool commonTestFlag() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("commonTestFlag");
    return method(javaProvider_);
  }

  bool allowCollapsableChildren() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("allowCollapsableChildren");
    return method(javaProvider_);
  }

  bool androidEnablePendingFabricTransactions() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("androidEnablePendingFabricTransactions");
    return method(javaProvider_);
  }

  bool batchRenderingUpdatesInEventLoop() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("batchRenderingUpdatesInEventLoop");
    return method(javaProvider_);
  }

  bool destroyFabricSurfacesInReactInstanceManager() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("destroyFabricSurfacesInReactInstanceManager");
    return method(javaProvider_);
  }

  bool enableBackgroundExecutor() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("enableBackgroundExecutor");
    return method(javaProvider_);
  }

  bool enableCleanTextInputYogaNode() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("enableCleanTextInputYogaNode");
    return method(javaProvider_);
  }

  bool enableMicrotasks() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("enableMicrotasks");
    return method(javaProvider_);
  }

  bool enableSynchronousStateUpdates() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("enableSynchronousStateUpdates");
    return method(javaProvider_);
  }

  bool enableUIConsistency() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("enableUIConsistency");
    return method(javaProvider_);
  }

  bool fixMountedFlagAndFixPreallocationClone() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("fixMountedFlagAndFixPreallocationClone");
    return method(javaProvider_);
  }

  bool forceBatchingMountItemsOnAndroid() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("forceBatchingMountItemsOnAndroid");
    return method(javaProvider_);
  }

  bool inspectorEnableCxxInspectorPackagerConnection() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("inspectorEnableCxxInspectorPackagerConnection");
    return method(javaProvider_);
  }

  bool inspectorEnableModernCDPRegistry() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("inspectorEnableModernCDPRegistry");
    return method(javaProvider_);
  }

  bool preventDoubleTextMeasure() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("preventDoubleTextMeasure");
    return method(javaProvider_);
  }

  bool useModernRuntimeScheduler() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("useModernRuntimeScheduler");
    return method(javaProvider_);
  }

  bool useNativeViewConfigsInBridgelessMode() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("useNativeViewConfigsInBridgelessMode");
    return method(javaProvider_);
  }

  bool useStateAlignmentMechanism() override {
    static const auto method =
        getReactNativeFeatureFlagsProviderJavaClass()->getMethod<jboolean()>("useStateAlignmentMechanism");
    return method(javaProvider_);
  }

 private:
  jni::global_ref<jobject> javaProvider_;
};

bool JReactNativeFeatureFlagsCxxInterop::commonTestFlag(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::commonTestFlag();
}

bool JReactNativeFeatureFlagsCxxInterop::allowCollapsableChildren(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::allowCollapsableChildren();
}

bool JReactNativeFeatureFlagsCxxInterop::androidEnablePendingFabricTransactions(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::androidEnablePendingFabricTransactions();
}

bool JReactNativeFeatureFlagsCxxInterop::batchRenderingUpdatesInEventLoop(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::batchRenderingUpdatesInEventLoop();
}

bool JReactNativeFeatureFlagsCxxInterop::destroyFabricSurfacesInReactInstanceManager(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::destroyFabricSurfacesInReactInstanceManager();
}

bool JReactNativeFeatureFlagsCxxInterop::enableBackgroundExecutor(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::enableBackgroundExecutor();
}

bool JReactNativeFeatureFlagsCxxInterop::enableCleanTextInputYogaNode(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::enableCleanTextInputYogaNode();
}

bool JReactNativeFeatureFlagsCxxInterop::enableMicrotasks(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::enableMicrotasks();
}

bool JReactNativeFeatureFlagsCxxInterop::enableSynchronousStateUpdates(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::enableSynchronousStateUpdates();
}

bool JReactNativeFeatureFlagsCxxInterop::enableUIConsistency(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::enableUIConsistency();
}

bool JReactNativeFeatureFlagsCxxInterop::fixMountedFlagAndFixPreallocationClone(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::fixMountedFlagAndFixPreallocationClone();
}

bool JReactNativeFeatureFlagsCxxInterop::forceBatchingMountItemsOnAndroid(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::forceBatchingMountItemsOnAndroid();
}

bool JReactNativeFeatureFlagsCxxInterop::inspectorEnableCxxInspectorPackagerConnection(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::inspectorEnableCxxInspectorPackagerConnection();
}

bool JReactNativeFeatureFlagsCxxInterop::inspectorEnableModernCDPRegistry(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::inspectorEnableModernCDPRegistry();
}

bool JReactNativeFeatureFlagsCxxInterop::preventDoubleTextMeasure(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::preventDoubleTextMeasure();
}

bool JReactNativeFeatureFlagsCxxInterop::useModernRuntimeScheduler(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::useModernRuntimeScheduler();
}

bool JReactNativeFeatureFlagsCxxInterop::useNativeViewConfigsInBridgelessMode(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::useNativeViewConfigsInBridgelessMode();
}

bool JReactNativeFeatureFlagsCxxInterop::useStateAlignmentMechanism(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  return ReactNativeFeatureFlags::useStateAlignmentMechanism();
}

void JReactNativeFeatureFlagsCxxInterop::override(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/,
    jni::alias_ref<jobject> provider) {
  ReactNativeFeatureFlags::override(
      std::make_unique<ReactNativeFeatureFlagsProviderHolder>(provider));
}

void JReactNativeFeatureFlagsCxxInterop::dangerouslyReset(
    facebook::jni::alias_ref<JReactNativeFeatureFlagsCxxInterop> /*unused*/) {
  ReactNativeFeatureFlags::dangerouslyReset();
}

void JReactNativeFeatureFlagsCxxInterop::registerNatives() {
  javaClassLocal()->registerNatives({
      makeNativeMethod(
          "override", JReactNativeFeatureFlagsCxxInterop::override),
      makeNativeMethod("dangerouslyReset", JReactNativeFeatureFlagsCxxInterop::dangerouslyReset),
      makeNativeMethod(
        "commonTestFlag",
        JReactNativeFeatureFlagsCxxInterop::commonTestFlag),
      makeNativeMethod(
        "allowCollapsableChildren",
        JReactNativeFeatureFlagsCxxInterop::allowCollapsableChildren),
      makeNativeMethod(
        "androidEnablePendingFabricTransactions",
        JReactNativeFeatureFlagsCxxInterop::androidEnablePendingFabricTransactions),
      makeNativeMethod(
        "batchRenderingUpdatesInEventLoop",
        JReactNativeFeatureFlagsCxxInterop::batchRenderingUpdatesInEventLoop),
      makeNativeMethod(
        "destroyFabricSurfacesInReactInstanceManager",
        JReactNativeFeatureFlagsCxxInterop::destroyFabricSurfacesInReactInstanceManager),
      makeNativeMethod(
        "enableBackgroundExecutor",
        JReactNativeFeatureFlagsCxxInterop::enableBackgroundExecutor),
      makeNativeMethod(
        "enableCleanTextInputYogaNode",
        JReactNativeFeatureFlagsCxxInterop::enableCleanTextInputYogaNode),
      makeNativeMethod(
        "enableMicrotasks",
        JReactNativeFeatureFlagsCxxInterop::enableMicrotasks),
      makeNativeMethod(
        "enableSynchronousStateUpdates",
        JReactNativeFeatureFlagsCxxInterop::enableSynchronousStateUpdates),
      makeNativeMethod(
        "enableUIConsistency",
        JReactNativeFeatureFlagsCxxInterop::enableUIConsistency),
      makeNativeMethod(
        "fixMountedFlagAndFixPreallocationClone",
        JReactNativeFeatureFlagsCxxInterop::fixMountedFlagAndFixPreallocationClone),
      makeNativeMethod(
        "forceBatchingMountItemsOnAndroid",
        JReactNativeFeatureFlagsCxxInterop::forceBatchingMountItemsOnAndroid),
      makeNativeMethod(
        "inspectorEnableCxxInspectorPackagerConnection",
        JReactNativeFeatureFlagsCxxInterop::inspectorEnableCxxInspectorPackagerConnection),
      makeNativeMethod(
        "inspectorEnableModernCDPRegistry",
        JReactNativeFeatureFlagsCxxInterop::inspectorEnableModernCDPRegistry),
      makeNativeMethod(
        "preventDoubleTextMeasure",
        JReactNativeFeatureFlagsCxxInterop::preventDoubleTextMeasure),
      makeNativeMethod(
        "useModernRuntimeScheduler",
        JReactNativeFeatureFlagsCxxInterop::useModernRuntimeScheduler),
      makeNativeMethod(
        "useNativeViewConfigsInBridgelessMode",
        JReactNativeFeatureFlagsCxxInterop::useNativeViewConfigsInBridgelessMode),
      makeNativeMethod(
        "useStateAlignmentMechanism",
        JReactNativeFeatureFlagsCxxInterop::useStateAlignmentMechanism),
  });
}

} // namespace facebook::react
