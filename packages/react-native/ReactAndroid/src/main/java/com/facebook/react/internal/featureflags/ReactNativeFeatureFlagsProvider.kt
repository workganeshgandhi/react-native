/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated SignedSource<<08acc01776848d8f2b55d68dcc71fdec>>
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

package com.facebook.react.internal.featureflags

import com.facebook.proguard.annotations.DoNotStrip

@DoNotStrip
public interface ReactNativeFeatureFlagsProvider {
  @DoNotStrip public fun commonTestFlag(): Boolean

  @DoNotStrip public fun allowCollapsableChildren(): Boolean

  @DoNotStrip public fun androidEnablePendingFabricTransactions(): Boolean

  @DoNotStrip public fun batchRenderingUpdatesInEventLoop(): Boolean

  @DoNotStrip public fun destroyFabricSurfacesInReactInstanceManager(): Boolean

  @DoNotStrip public fun enableBackgroundExecutor(): Boolean

  @DoNotStrip public fun enableCleanTextInputYogaNode(): Boolean

  @DoNotStrip public fun enableMicrotasks(): Boolean

  @DoNotStrip public fun enableSynchronousStateUpdates(): Boolean

  @DoNotStrip public fun enableUIConsistency(): Boolean

  @DoNotStrip public fun fixMountedFlagAndFixPreallocationClone(): Boolean

  @DoNotStrip public fun forceBatchingMountItemsOnAndroid(): Boolean

  @DoNotStrip public fun inspectorEnableCxxInspectorPackagerConnection(): Boolean

  @DoNotStrip public fun inspectorEnableModernCDPRegistry(): Boolean

  @DoNotStrip public fun preventDoubleTextMeasure(): Boolean

  @DoNotStrip public fun useModernRuntimeScheduler(): Boolean

  @DoNotStrip public fun useNativeViewConfigsInBridgelessMode(): Boolean

  @DoNotStrip public fun useStateAlignmentMechanism(): Boolean
}
