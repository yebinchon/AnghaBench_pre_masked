
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_keystore ;
typedef int * jclass ;
struct TYPE_6__ {int generateKey; int init; int getInstance; int build; int setEncryptionPaddings; int setBlockModes; int setKeySize; int ctor; } ;
struct TYPE_7__ {TYPE_2__ Builder; } ;
struct TYPE_5__ {int KEY_ALGORITHM_AES; int ENCRYPTION_PADDING_PKCS7; int BLOCK_MODE_CBC; int PURPOSE_DECRYPT; int PURPOSE_ENCRYPT; } ;
typedef int JNIEnv ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (TYPE_2__) ;
 int FUNC_5 (int ,int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_6(vlc_keystore *VAR_6, JNIEnv *VAR_7)
{
    jclass VAR_8 = ((void*)0);

    FUNC_1("android/security/keystore/KeyProperties");
    FUNC_2(VAR_4.PURPOSE_ENCRYPT, "PURPOSE_ENCRYPT");
    FUNC_2(VAR_4.PURPOSE_DECRYPT, "PURPOSE_DECRYPT");
    FUNC_3(VAR_4.BLOCK_MODE_CBC,
                  "BLOCK_MODE_CBC", "Ljava/lang/String;");
    FUNC_3(VAR_4.ENCRYPTION_PADDING_PKCS7,
                  "ENCRYPTION_PADDING_PKCS7", "Ljava/lang/String;");
    FUNC_3(VAR_4.KEY_ALGORITHM_AES,
                  "KEY_ALGORITHM_AES", "Ljava/lang/String;");

    FUNC_1("android/security/keystore/KeyGenParameterSpec$Builder");
    FUNC_4(VAR_2.Builder);
    FUNC_5(VAR_0, VAR_2.Builder.ctor, "<init>",
           "(Ljava/lang/String;I)V");
    FUNC_5(VAR_0, VAR_2.Builder.setKeySize, "setKeySize",
           "(I)Landroid/security/keystore/KeyGenParameterSpec$Builder;");
    FUNC_5(VAR_0, VAR_2.Builder.setBlockModes, "setBlockModes",
           "([Ljava/lang/String;)"
           "Landroid/security/keystore/KeyGenParameterSpec$Builder;");
    FUNC_5(VAR_0, VAR_2.Builder.setEncryptionPaddings,
           "setEncryptionPaddings", "([Ljava/lang/String;)"
           "Landroid/security/keystore/KeyGenParameterSpec$Builder;");
    FUNC_5(VAR_0, VAR_2.Builder.build, "build",
           "()Landroid/security/keystore/KeyGenParameterSpec;");

    FUNC_1("javax/crypto/KeyGenerator");
    FUNC_4(VAR_3);
    FUNC_5(VAR_1, VAR_3.getInstance, "getInstance",
           "(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyGenerator;");
    FUNC_5(VAR_0, VAR_3.init, "init",
           "(Ljava/security/spec/AlgorithmParameterSpec;)V");
    FUNC_5(VAR_0, VAR_3.generateKey, "generateKey",
           "()Ljavax/crypto/SecretKey;");

    FUNC_0(VAR_8);
    return VAR_5;
}
