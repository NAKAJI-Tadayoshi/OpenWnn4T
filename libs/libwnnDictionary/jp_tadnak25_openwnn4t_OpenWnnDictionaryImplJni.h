/*
 * Copyright (C) 2008,2009  OMRON SOFTWARE Co., Ltd.
 * Copyright (C) 2011  NAKAJI Tadayoshi
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni */

#ifndef _Included_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
#define _Included_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
#ifdef __cplusplus
extern "C" {
#endif
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_TOUPPER
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_TOUPPER 0L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_TOLOWER
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_TOLOWER 1L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_QWERTY_NEAR
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_QWERTY_NEAR 2L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_QWERTY_NEAR_UPPER
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_QWERTY_NEAR_UPPER 3L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_APPROX_PATTERN_JAJP_12KEY_NORMAL
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_APPROX_PATTERN_JAJP_12KEY_NORMAL 4L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_SEARCH_EXACT
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_SEARCH_EXACT 0L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_SEARCH_PREFIX
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_SEARCH_PREFIX 1L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_SEARCH_LINK
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_SEARCH_LINK 2L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_ORDER_BY_FREQUENCY
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_ORDER_BY_FREQUENCY 0L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_ORDER_BY_KEY
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_ORDER_BY_KEY 1L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_V1
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_V1 0L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_V2
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_V2 1L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_V3
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_V3 2L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_BUNTOU
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_BUNTOU 3L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_TANKANJI
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_TANKANJI 4L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_SUUJI
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_SUUJI 5L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_MEISI
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_MEISI 6L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_JINMEI
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_JINMEI 7L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_CHIMEI
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_CHIMEI 8L
#undef jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_KIGOU
#define jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_POS_TYPE_KIGOU 9L
/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    createWnnWork
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_createWnnWork
  (JNIEnv *, jclass, jstring);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    freeWnnWork
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_freeWnnWork
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    clearDictionaryParameters
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_clearDictionaryParameters
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    setDictionaryParameter
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_setDictionaryParameter
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    searchWord
 * Signature: (JIILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_searchWord
  (JNIEnv *, jclass, jlong, jint, jint, jstring);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    getNextWord
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_getNextWord
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    getStroke
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_getStroke
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    getCandidate
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_getCandidate
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    getFrequency
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_getFrequency
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    getLeftPartOfSpeech
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_getLeftPartOfSpeech
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    getRightPartOfSpeech
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_getRightPartOfSpeech
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    clearApproxPatterns
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_clearApproxPatterns
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    setApproxPattern
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_setApproxPattern__JLjava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    setApproxPattern
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_setApproxPattern__JI
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    getApproxPattern
 * Signature: (JLjava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_getApproxPattern
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    clearResult
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_clearResult
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    setLeftPartOfSpeech
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_setLeftPartOfSpeech
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    setRightPartOfSpeech
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_setRightPartOfSpeech
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    setStroke
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_setStroke
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    setCandidate
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_setCandidate
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    selectWord
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_selectWord
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    getConnectArray
 * Signature: (JI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_getConnectArray
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    getNumberOfLeftPOS
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_getNumberOfLeftPOS
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    getNumberOfRightPOS
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_getNumberOfRightPOS
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    getLeftPartOfSpeechSpecifiedType
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_getLeftPartOfSpeechSpecifiedType
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    getRightPartOfSpeechSpecifiedType
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_getRightPartOfSpeechSpecifiedType
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    createBindArray
 * Signature: (JLjava/lang/String;II)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_createBindArray
  (JNIEnv *, jclass, jlong, jstring, jint, jint);

/*
 * Class:     jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni
 * Method:    createQueryStringBase
 * Signature: (JIILjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jp_tadnak25_openwnn4t_OpenWnnDictionaryImplJni_createQueryStringBase
  (JNIEnv *, jclass, jlong, jint, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif
