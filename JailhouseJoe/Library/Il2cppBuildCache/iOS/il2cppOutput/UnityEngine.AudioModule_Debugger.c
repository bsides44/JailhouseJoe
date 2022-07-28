#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[57] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0 } /* 0x06000002 System.Boolean UnityEngine.AudioSettings::StartAudioOutput() */,
	{ 0, 0 } /* 0x06000003 System.Boolean UnityEngine.AudioSettings::StopAudioOutput() */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0 } /* 0x06000006 System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object) */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult) */,
	{ 0, 0 } /* 0x06000008 System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState() */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean) */,
	{ 0, 0 } /* 0x0600000A System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute() */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.AudioSettings/Mobile::InvokeOnMuteStateChanged(System.Boolean) */,
	{ 0, 0 } /* 0x0600000C System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput() */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput() */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.AudioSettings/Mobile::.cctor() */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.AudioClip::.ctor() */,
	{ 0, 0 } /* 0x06000010 System.Single UnityEngine.AudioClip::get_length() */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000014 System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0 } /* 0x06000015 System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object) */,
	{ 0, 0 } /* 0x06000016 System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult) */,
	{ 0, 0 } /* 0x06000017 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000018 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 0, 0 } /* 0x06000019 System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object) */,
	{ 0, 0 } /* 0x0600001A System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult) */,
	{ 0, 0 } /* 0x0600001B System.Single UnityEngine.AudioSource::GetPitch(UnityEngine.AudioSource) */,
	{ 0, 0 } /* 0x0600001C System.Void UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single) */,
	{ 0, 0 } /* 0x0600001D System.Void UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64) */,
	{ 0, 0 } /* 0x0600001E System.Void UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single) */,
	{ 0, 0 } /* 0x0600001F System.Void UnityEngine.AudioSource::Stop(System.Boolean) */,
	{ 0, 0 } /* 0x06000020 System.Void UnityEngine.AudioSource::set_volume(System.Single) */,
	{ 0, 0 } /* 0x06000021 System.Single UnityEngine.AudioSource::get_pitch() */,
	{ 0, 0 } /* 0x06000022 System.Void UnityEngine.AudioSource::set_pitch(System.Single) */,
	{ 0, 0 } /* 0x06000023 System.Single UnityEngine.AudioSource::get_time() */,
	{ 0, 0 } /* 0x06000024 System.Void UnityEngine.AudioSource::set_time(System.Single) */,
	{ 0, 0 } /* 0x06000025 UnityEngine.AudioClip UnityEngine.AudioSource::get_clip() */,
	{ 0, 0 } /* 0x06000026 System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip) */,
	{ 0, 0 } /* 0x06000027 System.Void UnityEngine.AudioSource::Play() */,
	{ 0, 0 } /* 0x06000028 System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip) */,
	{ 0, 0 } /* 0x06000029 System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single) */,
	{ 0, 0 } /* 0x0600002A System.Void UnityEngine.AudioSource::Stop() */,
	{ 0, 0 } /* 0x0600002B System.Void UnityEngine.AudioSource::set_loop(System.Boolean) */,
	{ 0, 0 } /* 0x0600002C System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean) */,
	{ 0, 0 } /* 0x0600002D System.Void UnityEngine.AudioSource::set_dopplerLevel(System.Single) */,
	{ 0, 0 } /* 0x0600002E System.Void UnityEngine.AudioSource::set_minDistance(System.Single) */,
	{ 0, 0 } /* 0x0600002F System.Void UnityEngine.AudioSource::set_maxDistance(System.Single) */,
	{ 0, 0 } /* 0x06000030 UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 0, 0 } /* 0x06000031 System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 0, 0 } /* 0x06000032 UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 0, 0 } /* 0x06000033 System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 0, 0 } /* 0x06000034 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 0, 0 } /* 0x06000035 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0 } /* 0x06000036 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000037 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
	{ 0, 0 } /* 0x06000038 System.IAsyncResult UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::BeginInvoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32,System.AsyncCallback,System.Object) */,
	{ 0, 0 } /* 0x06000039 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::EndInvoke(System.IAsyncResult) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[171] = 
{
	{ 13751, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 13751, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 13751, 1, 331, 331, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 13751, 1, 332, 332, 13, 53, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 13751, 1, 332, 332, 0, 0, 10, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 13751, 1, 333, 333, 17, 63, 13, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 13751, 1, 334, 334, 9, 10, 25, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 13751, 1, 333, 333, 17, 63, 19, kSequencePointKind_StepOut, 0, 7 } /* seqPointIndex: 7 */,
	{ 13758, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 13758, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 13758, 1, 359, 359, 17, 21, 0, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 13759, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 13759, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 13759, 1, 360, 360, 17, 29, 0, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 13760, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 13760, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 13760, 1, 367, 367, 17, 18, 0, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 13760, 1, 368, 368, 21, 51, 1, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 13760, 1, 369, 369, 17, 18, 9, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 13761, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 13761, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 13761, 1, 392, 392, 13, 14, 0, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 13761, 1, 393, 393, 17, 39, 1, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 13761, 1, 393, 393, 0, 0, 13, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 13761, 1, 394, 394, 17, 18, 16, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 13761, 1, 395, 395, 21, 38, 17, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 13761, 1, 396, 396, 21, 47, 24, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 13761, 1, 396, 396, 0, 0, 30, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 13761, 1, 397, 397, 21, 22, 33, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 13761, 1, 398, 398, 25, 39, 34, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 13761, 1, 398, 398, 0, 0, 40, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 13761, 1, 399, 399, 29, 47, 43, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 13761, 1, 401, 401, 29, 48, 51, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 13761, 1, 402, 402, 21, 22, 57, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 13761, 1, 403, 403, 21, 52, 58, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 13761, 1, 403, 403, 0, 0, 67, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 13761, 1, 404, 404, 25, 50, 70, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 13761, 1, 405, 405, 17, 18, 82, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 13761, 1, 406, 406, 13, 14, 83, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 13761, 1, 393, 393, 17, 39, 2, kSequencePointKind_StepOut, 0, 39 } /* seqPointIndex: 39 */,
	{ 13761, 1, 395, 395, 21, 38, 18, kSequencePointKind_StepOut, 0, 40 } /* seqPointIndex: 40 */,
	{ 13761, 1, 396, 396, 21, 47, 24, kSequencePointKind_StepOut, 0, 41 } /* seqPointIndex: 41 */,
	{ 13761, 1, 398, 398, 25, 39, 34, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 13761, 1, 399, 399, 29, 47, 43, kSequencePointKind_StepOut, 0, 43 } /* seqPointIndex: 43 */,
	{ 13761, 1, 401, 401, 29, 48, 51, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 13761, 1, 404, 404, 25, 50, 76, kSequencePointKind_StepOut, 0, 45 } /* seqPointIndex: 45 */,
	{ 13762, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 13762, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 13762, 1, 409, 409, 13, 14, 0, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 13762, 1, 410, 410, 17, 50, 1, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 13762, 1, 411, 411, 13, 14, 7, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 13762, 1, 410, 410, 17, 50, 1, kSequencePointKind_StepOut, 0, 51 } /* seqPointIndex: 51 */,
	{ 13763, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 13763, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 13763, 1, 414, 414, 13, 14, 0, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 13763, 1, 415, 415, 17, 49, 1, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 13763, 1, 416, 416, 13, 14, 7, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 13763, 1, 415, 415, 17, 49, 1, kSequencePointKind_StepOut, 0, 57 } /* seqPointIndex: 57 */,
	{ 13764, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 13764, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 13764, 1, 361, 361, 17, 22, 0, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 13764, 1, 363, 363, 13, 64, 6, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 13765, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 13765, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 13765, 1, 598, 598, 9, 68, 0, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 13765, 1, 602, 602, 9, 78, 7, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 13765, 1, 463, 463, 9, 28, 14, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 13765, 1, 463, 463, 29, 30, 21, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 13765, 1, 463, 463, 30, 31, 22, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 13765, 1, 463, 463, 9, 28, 15, kSequencePointKind_StepOut, 0, 69 } /* seqPointIndex: 69 */,
	{ 13767, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 13767, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 13767, 1, 606, 606, 9, 10, 0, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 13767, 1, 607, 607, 13, 45, 1, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 13767, 1, 607, 607, 0, 0, 11, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 13767, 1, 608, 608, 17, 43, 14, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 13767, 1, 609, 609, 9, 10, 27, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 13767, 1, 608, 608, 17, 43, 21, kSequencePointKind_StepOut, 0, 77 } /* seqPointIndex: 77 */,
	{ 13768, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 13768, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 13768, 1, 613, 613, 9, 10, 0, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 13768, 1, 614, 614, 13, 50, 1, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 13768, 1, 614, 614, 0, 0, 11, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 13768, 1, 615, 615, 17, 52, 14, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 13768, 1, 616, 616, 9, 10, 27, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 13768, 1, 615, 615, 17, 52, 21, kSequencePointKind_StepOut, 0, 85 } /* seqPointIndex: 85 */,
	{ 13783, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 13783, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 13783, 1, 710, 710, 17, 18, 0, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 13783, 1, 710, 710, 19, 41, 1, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 13783, 1, 710, 710, 42, 43, 10, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 13783, 1, 710, 710, 19, 41, 2, kSequencePointKind_StepOut, 0, 91 } /* seqPointIndex: 91 */,
	{ 13784, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 13784, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 13784, 1, 711, 711, 17, 18, 0, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 13784, 1, 711, 711, 19, 41, 1, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 13784, 1, 711, 711, 42, 43, 9, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 13784, 1, 711, 711, 19, 41, 3, kSequencePointKind_StepOut, 0, 97 } /* seqPointIndex: 97 */,
	{ 13789, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 13789, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 13789, 1, 819, 819, 9, 10, 0, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 13789, 1, 820, 820, 13, 33, 1, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 13789, 1, 821, 821, 9, 10, 10, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 13789, 1, 820, 820, 13, 33, 4, kSequencePointKind_StepOut, 0, 103 } /* seqPointIndex: 103 */,
	{ 13790, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 13790, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 13790, 1, 843, 843, 9, 10, 0, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 13790, 1, 844, 844, 13, 37, 1, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 13790, 1, 845, 845, 9, 10, 14, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 13790, 1, 844, 844, 13, 37, 8, kSequencePointKind_StepOut, 0, 109 } /* seqPointIndex: 109 */,
	{ 13791, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 13791, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 13791, 1, 848, 848, 9, 10, 0, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 13791, 1, 849, 849, 13, 30, 1, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 13791, 1, 849, 849, 0, 0, 9, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 13791, 1, 850, 850, 13, 14, 12, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 13791, 1, 851, 851, 17, 83, 13, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 13791, 1, 852, 852, 17, 24, 24, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 13791, 1, 855, 855, 13, 56, 26, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 13791, 1, 856, 856, 9, 10, 35, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 13791, 1, 849, 849, 13, 30, 3, kSequencePointKind_StepOut, 0, 120 } /* seqPointIndex: 120 */,
	{ 13791, 1, 851, 851, 17, 83, 18, kSequencePointKind_StepOut, 0, 121 } /* seqPointIndex: 121 */,
	{ 13791, 1, 855, 855, 13, 56, 29, kSequencePointKind_StepOut, 0, 122 } /* seqPointIndex: 122 */,
	{ 13792, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 13792, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 13792, 1, 863, 863, 9, 10, 0, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 13792, 1, 864, 864, 13, 24, 1, kSequencePointKind_Normal, 0, 126 } /* seqPointIndex: 126 */,
	{ 13792, 1, 865, 865, 9, 10, 9, kSequencePointKind_Normal, 0, 127 } /* seqPointIndex: 127 */,
	{ 13792, 1, 864, 864, 13, 24, 3, kSequencePointKind_StepOut, 0, 128 } /* seqPointIndex: 128 */,
	{ 13798, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 13798, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 13798, 2, 49, 49, 9, 10, 0, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 13798, 2, 50, 50, 13, 29, 1, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 13798, 2, 51, 51, 9, 10, 10, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 13799, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 13799, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 13799, 2, 64, 64, 9, 10, 0, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 13799, 2, 65, 65, 13, 53, 1, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 13799, 2, 66, 66, 9, 10, 22, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 13799, 2, 65, 65, 13, 53, 2, kSequencePointKind_StepOut, 0, 139 } /* seqPointIndex: 139 */,
	{ 13799, 2, 65, 65, 13, 53, 9, kSequencePointKind_StepOut, 0, 140 } /* seqPointIndex: 140 */,
	{ 13799, 2, 65, 65, 13, 53, 14, kSequencePointKind_StepOut, 0, 141 } /* seqPointIndex: 141 */,
	{ 13800, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 13800, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 13800, 3, 47, 47, 9, 10, 0, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
	{ 13800, 3, 48, 48, 13, 29, 1, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 13800, 3, 49, 49, 9, 10, 10, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 13801, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 13801, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 13801, 3, 62, 62, 9, 10, 0, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 13801, 3, 63, 63, 13, 53, 1, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 13801, 3, 64, 64, 9, 10, 22, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 13801, 3, 63, 63, 13, 53, 2, kSequencePointKind_StepOut, 0, 152 } /* seqPointIndex: 152 */,
	{ 13801, 3, 63, 63, 13, 53, 9, kSequencePointKind_StepOut, 0, 153 } /* seqPointIndex: 153 */,
	{ 13801, 3, 63, 63, 13, 53, 14, kSequencePointKind_StepOut, 0, 154 } /* seqPointIndex: 154 */,
	{ 13802, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 13802, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 13802, 4, 177, 177, 9, 10, 0, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 13802, 4, 178, 178, 13, 47, 1, kSequencePointKind_Normal, 0, 158 } /* seqPointIndex: 158 */,
	{ 13802, 4, 178, 178, 0, 0, 11, kSequencePointKind_Normal, 0, 159 } /* seqPointIndex: 159 */,
	{ 13802, 4, 180, 180, 17, 69, 14, kSequencePointKind_Normal, 0, 160 } /* seqPointIndex: 160 */,
	{ 13802, 4, 181, 181, 9, 10, 28, kSequencePointKind_Normal, 0, 161 } /* seqPointIndex: 161 */,
	{ 13802, 4, 180, 180, 17, 69, 22, kSequencePointKind_StepOut, 0, 162 } /* seqPointIndex: 162 */,
	{ 13803, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 163 } /* seqPointIndex: 163 */,
	{ 13803, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 13803, 4, 185, 185, 9, 10, 0, kSequencePointKind_Normal, 0, 165 } /* seqPointIndex: 165 */,
	{ 13803, 4, 186, 186, 13, 46, 1, kSequencePointKind_Normal, 0, 166 } /* seqPointIndex: 166 */,
	{ 13803, 4, 186, 186, 0, 0, 11, kSequencePointKind_Normal, 0, 167 } /* seqPointIndex: 167 */,
	{ 13803, 4, 187, 187, 17, 75, 14, kSequencePointKind_Normal, 0, 168 } /* seqPointIndex: 168 */,
	{ 13803, 4, 188, 188, 9, 10, 28, kSequencePointKind_Normal, 0, 169 } /* seqPointIndex: 169 */,
	{ 13803, 4, 187, 187, 17, 75, 22, kSequencePointKind_StepOut, 0, 170 } /* seqPointIndex: 170 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "/Users/bokken/buildslave/unity/build/Modules/Audio/Public/ScriptBindings/Audio.bindings.cs", { 95, 147, 0, 251, 184, 84, 165, 121, 7, 96, 150, 235, 78, 163, 72, 225} }, //1 
{ "/Users/bokken/buildslave/unity/build/Modules/Audio/Public/ScriptBindings/AudioClipPlayable.bindings.cs", { 136, 110, 11, 239, 4, 37, 180, 165, 136, 112, 116, 151, 134, 78, 48, 235} }, //2 
{ "/Users/bokken/buildslave/unity/build/Modules/Audio/Public/ScriptBindings/AudioMixerPlayable.bindings.cs", { 61, 101, 161, 191, 246, 243, 230, 247, 173, 244, 46, 184, 65, 58, 4, 90} }, //3 
{ "/Users/bokken/buildslave/unity/build/Modules/Audio/Public/ScriptBindings/AudioSampleProvider.bindings.cs", { 47, 120, 50, 45, 60, 26, 245, 52, 137, 63, 13, 94, 178, 230, 94, 160} }, //4 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[7] = 
{
	{ 2367, 1 },
	{ 2366, 1 },
	{ 2370, 1 },
	{ 2373, 1 },
	{ 2374, 2 },
	{ 2377, 3 },
	{ 2381, 4 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[13] = 
{
	{ 0, 26 },
	{ 0, 11 },
	{ 0, 84 },
	{ 0, 28 },
	{ 0, 28 },
	{ 0, 12 },
	{ 0, 36 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 29 },
	{ 0, 29 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[57] = 
{
	{ 26, 0, 1 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings::StartAudioOutput() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings::StopAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0, 0 } /* System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean) */,
	{ 11, 1, 1 } /* System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute() */,
	{ 84, 2, 1 } /* System.Void UnityEngine.AudioSettings/Mobile::InvokeOnMuteStateChanged(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::.cctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip::.ctor() */,
	{ 0, 0, 0 } /* System.Single UnityEngine.AudioClip::get_length() */,
	{ 28, 3, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 28, 4, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0, 0 } /* System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 0, 0, 0 } /* System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult) */,
	{ 0, 0, 0 } /* System.Single UnityEngine.AudioSource::GetPitch(UnityEngine.AudioSource) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::Stop(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_volume(System.Single) */,
	{ 12, 5, 1 } /* System.Single UnityEngine.AudioSource::get_pitch() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_pitch(System.Single) */,
	{ 0, 0, 0 } /* System.Single UnityEngine.AudioSource::get_time() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_time(System.Single) */,
	{ 0, 0, 0 } /* UnityEngine.AudioClip UnityEngine.AudioSource::get_clip() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::Play() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip) */,
	{ 36, 6, 1 } /* System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::Stop() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_loop(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_dopplerLevel(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_minDistance(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_maxDistance(System.Single) */,
	{ 12, 7, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 24, 8, 1 } /* System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 12, 9, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 24, 10, 1 } /* System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 29, 11, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 29, 12, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
	{ 0, 0, 0 } /* System.IAsyncResult UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::BeginInvoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32,System.AsyncCallback,System.Object) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::EndInvoke(System.IAsyncResult) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	171,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_AudioModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	7,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
