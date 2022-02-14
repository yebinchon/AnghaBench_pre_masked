
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_keystore ;
typedef int * jstring ;
typedef int * jclass ;
struct TYPE_8__ {int getSecretKey; } ;
struct TYPE_11__ {int DECRYPT_MODE; int ENCRYPT_MODE; int getIV; int doFinal; int init; int getInstance; int ctor; TYPE_1__ SecretKeyEntry; int getEntry; int load; } ;
struct TYPE_10__ {int toString; } ;
struct TYPE_9__ {int VLC_CIPHER; } ;
typedef int JNIEnv ;


 scalar_t__ FUNC_0 () ;
 TYPE_4__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_4__) ;
 int FUNC_5 (int ,int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*) ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;

__attribute__((used)) static int
FUNC_8(vlc_keystore *VAR_9, JNIEnv *VAR_10)
{
    jclass VAR_11 = ((void*)0);

    FUNC_2("java/lang/Object");
    FUNC_5(VAR_1, VAR_5.toString, "toString", "()Ljava/lang/String;");

    FUNC_2("java/security/KeyStore");
    FUNC_4(VAR_4);
    FUNC_5(VAR_2, VAR_4.getInstance, "getInstance",
           "(Ljava/lang/String;)Ljava/security/KeyStore;");
    FUNC_5(VAR_1, VAR_4.load, "load",
           "(Ljava/security/KeyStore$LoadStoreParameter;)V");
    FUNC_5(VAR_1, VAR_4.getEntry, "getEntry",
           "(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)"
           "Ljava/security/KeyStore$Entry;");

    FUNC_2("java/security/KeyStore$SecretKeyEntry");
    FUNC_5(VAR_1, VAR_4.SecretKeyEntry.getSecretKey, "getSecretKey",
           "()Ljavax/crypto/SecretKey;");


    FUNC_2("javax/crypto/spec/IvParameterSpec");
    FUNC_4(VAR_3);
    FUNC_5(VAR_1, VAR_3.ctor, "<init>", "([B)V");

    FUNC_2("javax/crypto/Cipher");
    FUNC_4(VAR_0);
    FUNC_5(VAR_2, VAR_0.getInstance, "getInstance",
           "(Ljava/lang/String;)Ljavax/crypto/Cipher;");
    FUNC_5(VAR_1, VAR_0.init, "init",
           "(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V");
    FUNC_5(VAR_1, VAR_0.doFinal, "doFinal", "([B)[B");
    FUNC_5(VAR_1, VAR_0.getIV, "getIV", "()[B");
    FUNC_3(VAR_0.ENCRYPT_MODE, "ENCRYPT_MODE");
    FUNC_3(VAR_0.DECRYPT_MODE, "DECRYPT_MODE");

    FUNC_1(VAR_11);

    jstring VAR_12 = FUNC_7("AES/CBC/PKCS7Padding");
    if (FUNC_0())
        return VAR_6;
    VAR_8.VLC_CIPHER = FUNC_6(VAR_12);
    FUNC_1(VAR_12);

    return VAR_7;
}
