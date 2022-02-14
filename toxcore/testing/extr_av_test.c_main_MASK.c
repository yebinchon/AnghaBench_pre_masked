
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int time_t ;
struct toxav_thread_data {scalar_t__ state; int sig; int * BobAV; int * AliceAV; int incoming; void* arb; int arb_mutex; } ;
struct stat {int st_mode; } ;
struct PaStreamParameters {long device; int channelCount; int * hostApiSpecificStreamInfo; int suggestedLatency; int sampleFormat; } ;
typedef int pthread_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int ToxAV ;
typedef int Tox ;
struct TYPE_6__ {char* name; int defaultHighOutputLatency; } ;
struct TYPE_5__ {int frames; int samplerate; int channels; } ;
typedef int TOXAV_ERR_SEND_FRAME ;
typedef int TOXAV_ERR_CALL_CONTROL ;
typedef int TOXAV_ERR_CALL ;
typedef int TOXAV_ERR_ANSWER ;
typedef int SNDFILE ;
typedef TYPE_1__ SF_INFO ;
typedef scalar_t__ PaError ;
typedef TYPE_2__ PaDeviceInfo ;
typedef int IplImage ;
typedef int CvCapture ;
typedef struct toxav_thread_data CallControl ;


 long FUNC_0 () ;
 TYPE_2__* FUNC_1 (long) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int *,struct PaStreamParameters*,int,int,int ,int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_0 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 () ;
 int * FUNC_12 (char const*) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int **) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ,char*,long) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (char*,char*,int ) ;
 int FUNC_19 (int,char**,char*) ;
 int FUNC_20 (int **,int **,struct toxav_thread_data*,int **,struct toxav_thread_data*) ;
 int FUNC_21 (int *,int *,int *) ;
 int VAR_9 ;
 int FUNC_22 (struct toxav_thread_data*,int ,int) ;
 char* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_23 () ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*,...) ;
 int FUNC_26 (int *,int *,int ,struct toxav_thread_data*) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ,int *) ;
 int FUNC_30 () ;
 void* FUNC_31 (int) ;
 scalar_t__ FUNC_32 (void*,void**) ;
 int FUNC_33 (int *,int ,int *) ;
 int FUNC_34 (int *) ;
 int * FUNC_35 (char const*,int ,TYPE_1__*) ;
 int FUNC_36 (int *,int *,int) ;
 scalar_t__ FUNC_37 (char const*,struct stat*) ;
 int VAR_15 ;
 void* FUNC_38 (char*,char**,int) ;
 int FUNC_39 (int *) ;
 int FUNC_40 (int *) ;
 int FUNC_41 (int *,int ,int,int,int*) ;
 int FUNC_42 (int *,int ,int *,int,int,int,int *) ;
 int FUNC_43 (int *,int ,int,int,int*) ;
 int FUNC_44 (int *,int ,int ,int*) ;
 int * FUNC_45 (int *) ;
 int FUNC_46 (int *) ;

int FUNC_47 (int VAR_16, char **VAR_17)
{
    FUNC_18("/dev/zero", "w", VAR_15);
    FUNC_2();

    struct stat VAR_18;


    const char *VAR_19 = ((void*)0);
    const char *VAR_20 = ((void*)0);
    long VAR_21 = -1;

    int32_t VAR_22 = 20;
    int32_t VAR_23 = 10;


CHECK_ARG:

    switch (FUNC_19(VAR_16, VAR_17, "a:b:v:x:o:dh")) {
        case 'a':
            VAR_19 = VAR_10;
            goto CHECK_ARG;

        case 'b': {
            char *VAR_24;
            VAR_22 = FUNC_38(VAR_10, &VAR_24, 10);

            if (*VAR_24) {
                FUNC_25("Invalid value for argument: 'b'");
                FUNC_15(1);
            }

            goto CHECK_ARG;
        }

        case 'v':
            VAR_20 = VAR_10;
            goto CHECK_ARG;

        case 'x': {
            char *VAR_25;
            VAR_23 = FUNC_38(VAR_10, &VAR_25, 10);

            if (*VAR_25) {
                FUNC_25("Invalid value for argument: 'x'");
                FUNC_15(1);
            }

            goto CHECK_ARG;
        }

        case 'o': {
            char *VAR_26;
            VAR_21 = FUNC_38(VAR_10, &VAR_26, 10);

            if (*VAR_26) {
                FUNC_25("Invalid value for argument: 'o'");
                FUNC_15(1);
            }

            goto CHECK_ARG;
        }

        case 'd':
            return FUNC_23();

        case 'h':
            return FUNC_24(VAR_17[0]);

        case '?':
            FUNC_15(1);

        case -1:
            ;
    }

    {
        if (!VAR_19) {
            FUNC_25("Required audio input file!\n");
            FUNC_15(1);
        }

        if (!VAR_20) {
            FUNC_25("Required video input file!\n");
            FUNC_15(1);
        }


        if (FUNC_37(VAR_19, &VAR_18) != 0 || !FUNC_7(VAR_18.st_mode)) {
            FUNC_25("%s doesn't seem to be a regular file!\n", VAR_19);
            FUNC_15(1);
        }

        if (FUNC_37(VAR_20, &VAR_18) != 0 || !FUNC_7(VAR_18.st_mode)) {
            FUNC_25("%s doesn't seem to be a regular file!\n", VAR_20);
            FUNC_15(1);
        }
    }

    if (VAR_21 < 0)
        VAR_21 = FUNC_0();

    const PaDeviceInfo *VAR_27 = FUNC_1(VAR_21);

    if (!VAR_27) {
        FUNC_16(VAR_15, "Device under index: %ld invalid", VAR_21);
        return 1;
    }

    FUNC_25("Using audio device: %s\n", VAR_27->name);
    FUNC_25("Using audio file: %s\n", VAR_19);
    FUNC_25("Using video file: %s\n", VAR_20);



    Tox *VAR_28;
    ToxAV *VAR_29;
    ToxAV *VAR_30;

    CallControl VAR_31;
    CallControl VAR_32;

    FUNC_20(&VAR_28, &VAR_29, &VAR_31, &VAR_30, &VAR_32);

    if (VAR_1) {
        SNDFILE *VAR_33;
        SF_INFO VAR_34;

        FUNC_25("\nTrying audio enc/dec...\n");

        FUNC_22(&VAR_31, 0, sizeof(CallControl));
        FUNC_22(&VAR_32, 0, sizeof(CallControl));

        FUNC_29(VAR_31.arb_mutex, ((void*)0));
        FUNC_29(VAR_32.arb_mutex, ((void*)0));

        VAR_31.arb = FUNC_31(16);
        VAR_32.arb = FUNC_31(16);

        {
            TOXAV_ERR_CALL VAR_35;
            FUNC_43(VAR_29, 0, 48, 0, &VAR_35);

            if (VAR_35 != VAR_6) {
                FUNC_25("toxav_call failed: %d\n", VAR_35);
                FUNC_15(1);
            }
        }

        while (!VAR_32.incoming)
            FUNC_21(VAR_28, VAR_29, VAR_30);

        {
            TOXAV_ERR_ANSWER VAR_36;
            FUNC_41(VAR_30, 0, 48, 0, &VAR_36);

            if (VAR_36 != VAR_4) {
                FUNC_25("toxav_answer failed: %d\n", VAR_36);
                FUNC_15(1);
            }
        }

        while (VAR_31.state == 0)
            FUNC_21(VAR_28, VAR_29, VAR_30);


        VAR_33 = FUNC_35(VAR_19, VAR_0, &VAR_34);

        if (VAR_33 == ((void*)0)) {
            FUNC_25("Failed to open the file.\n");
            FUNC_15(1);
        }

        int16_t VAR_37[5760];

        time_t VAR_38 = FUNC_39(((void*)0));
        time_t VAR_39 = VAR_34.frames / VAR_34.samplerate + 2;



        struct toxav_thread_data VAR_40 = {
            .AliceAV = VAR_29,
            .BobAV = VAR_30,
            .sig = 0
        };

        pthread_t VAR_41;
        FUNC_26(&VAR_41, ((void*)0), VAR_9, &VAR_40);
        FUNC_27(VAR_41);

        int VAR_42 = (VAR_34.samplerate * VAR_22 / 1000) * VAR_34.channels;

        struct PaStreamParameters VAR_43;
        VAR_43.device = VAR_21;
        VAR_43.channelCount = VAR_34.channels;
        VAR_43.sampleFormat = VAR_11;
        VAR_43.suggestedLatency = VAR_27->defaultHighOutputLatency;
        VAR_43.hostApiSpecificStreamInfo = ((void*)0);

        PaError VAR_44 = FUNC_3(&VAR_8, ((void*)0), &VAR_43, VAR_34.samplerate, VAR_42, VAR_13, ((void*)0), ((void*)0));
        FUNC_9(VAR_44 == VAR_12);

        VAR_44 = FUNC_4(VAR_8);
        FUNC_9(VAR_44 == VAR_12);




        pthread_t VAR_45;
        FUNC_26(&VAR_45, ((void*)0), VAR_14, &VAR_32);
        FUNC_27(VAR_45);

        FUNC_25("Sample rate %d\n", VAR_34.samplerate);

        while (VAR_38 + VAR_39 > FUNC_39(((void*)0)) ) {
            uint64_t VAR_46 = FUNC_11();
            int64_t VAR_47 = FUNC_36(VAR_33, VAR_37, VAR_42);

            if (VAR_47 > 0) {
                TOXAV_ERR_SEND_FRAME VAR_48;

                if (FUNC_42(VAR_29, 0, VAR_37, VAR_47 / VAR_34.channels, VAR_34.channels, VAR_34.samplerate,
                                           &VAR_48) == 0) {
                    FUNC_25("Error sending frame of size %ld: %d\n", VAR_47, VAR_48);
                }
            }

            FUNC_21(VAR_28, VAR_29, VAR_30);
            FUNC_10(FUNC_8(VAR_22 - (FUNC_11() - VAR_46) - 1));
        }

        FUNC_25("Played file in: %lu; stopping stream...\n", FUNC_39(((void*)0)) - VAR_38);

        FUNC_5(VAR_8);
        FUNC_34(VAR_33);

        {
            TOXAV_ERR_CALL_CONTROL VAR_49;
            FUNC_44(VAR_29, 0, VAR_3, &VAR_49);

            if (VAR_49 != VAR_5) {
                FUNC_25("toxav_call_control failed: %d\n", VAR_49);
                FUNC_15(1);
            }
        }

        FUNC_21(VAR_28, VAR_29, VAR_30);
        FUNC_9(VAR_32.state == VAR_7);


        VAR_40.sig = -1;

        while (VAR_40.sig != 1)
            FUNC_30();

        FUNC_28(VAR_31.arb_mutex);
        FUNC_28(VAR_32.arb_mutex);

        void *VAR_50 = ((void*)0);

        while (FUNC_32(VAR_31.arb, &VAR_50))
            FUNC_17(VAR_50);

        while (FUNC_32(VAR_32.arb, &VAR_50))
            FUNC_17(VAR_50);

        FUNC_25("Success!");
    }

    if (VAR_2) {
        FUNC_25("\nTrying video enc/dec...\n");

        FUNC_22(&VAR_31, 0, sizeof(CallControl));
        FUNC_22(&VAR_32, 0, sizeof(CallControl));

        {
            TOXAV_ERR_CALL VAR_51;
            FUNC_43(VAR_29, 0, 0, 2000, &VAR_51);

            if (VAR_51 != VAR_6) {
                FUNC_25("toxav_call failed: %d\n", VAR_51);
                FUNC_15(1);
            }
        }

        while (!VAR_32.incoming)
            FUNC_21(VAR_28, VAR_29, VAR_30);

        {
            TOXAV_ERR_ANSWER VAR_52;
            FUNC_41(VAR_30, 0, 0, 5000, &VAR_52);

            if (VAR_52 != VAR_4) {
                FUNC_25("toxav_answer failed: %d\n", VAR_52);
                FUNC_15(1);
            }
        }

        FUNC_21(VAR_28, VAR_29, VAR_30);


        struct toxav_thread_data VAR_53 = {
            .AliceAV = VAR_29,
            .BobAV = VAR_30,
            .sig = 0
        };

        pthread_t VAR_54;
        FUNC_26(&VAR_54, ((void*)0), VAR_9, &VAR_53);
        FUNC_27(VAR_54);

        CvCapture *VAR_55 = FUNC_12(VAR_20);

        if (!VAR_55) {
            FUNC_25("Failed to open video file: %s\n", VAR_20);
            FUNC_15(1);
        }



        time_t VAR_56 = FUNC_39(((void*)0));

        while (VAR_56 + 90 > FUNC_39(((void*)0))) {
            IplImage *VAR_57 = FUNC_13(VAR_55 );

            if (!VAR_57)
                break;

            FUNC_33(VAR_29, 0, VAR_57);
            FUNC_21(VAR_28, VAR_29, VAR_30);
            FUNC_10(10);
        }

        FUNC_14(&VAR_55);

        {
            TOXAV_ERR_CALL_CONTROL VAR_58;
            FUNC_44(VAR_29, 0, VAR_3, &VAR_58);

            if (VAR_58 != VAR_5) {
                FUNC_25("toxav_call_control failed: %d\n", VAR_58);
                FUNC_15(1);
            }
        }

        FUNC_21(VAR_28, VAR_29, VAR_30);
        FUNC_9(VAR_32.state == VAR_7);


        FUNC_25("Stopping decode thread\n");
        VAR_53.sig = -1;

        while (VAR_53.sig != 1)
            FUNC_30();

        FUNC_25("Success!");
    }


    Tox *VAR_59 = FUNC_45(VAR_29);
    Tox *VAR_60 = FUNC_45(VAR_30);
    FUNC_46(VAR_30);
    FUNC_46(VAR_29);
    FUNC_40(VAR_60);
    FUNC_40(VAR_59);
    FUNC_40(VAR_28);

    FUNC_25("\nTest successful!\n");

    FUNC_6();
    return 0;
}
