
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_playlist_t ;
typedef int vlc_player_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_8__ {int plidx_follow; char* open_chain; int * playlist; } ;
typedef TYPE_2__ intf_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *,double) ;
 int VAR_10 ;
 int FUNC_2 (TYPE_1__*,int *) ;




 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int,int *) ;
 int FUNC_17 (int *,int,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static void FUNC_24(intf_thread_t *VAR_13, vlc_player_t *VAR_14, int VAR_15)
{
    intf_sys_t *VAR_16 = VAR_13->p_sys;
    vlc_playlist_t *VAR_17 = VAR_16->playlist;

    switch(VAR_15)
    {
    case 0x1b:

        if (FUNC_4() != VAR_10)
            return;


    case 'q':
    case 'Q':
    case 130:
        FUNC_5(FUNC_6(VAR_13));
        return;

    case 'h':
    case 'H': FUNC_0(VAR_16, VAR_2); return;
    case 'i': FUNC_0(VAR_16, VAR_3); return;
    case 'M': FUNC_0(VAR_16, VAR_5); return;
    case 'L': FUNC_0(VAR_16, VAR_4); return;
    case 'P': FUNC_0(VAR_16, VAR_7); return;
    case 'B': FUNC_0(VAR_16, VAR_1); return;
    case 'S': FUNC_0(VAR_16, VAR_9); return;

    case '/':
        VAR_16->plidx_follow = 0;
        FUNC_0(VAR_16, VAR_8);
        return;

    case 'A':
        VAR_16->open_chain[0] = '\0';
        FUNC_0(VAR_16, VAR_6);
        return;


    case 128: FUNC_1(VAR_14, +0.01); return;
    case 129: FUNC_1(VAR_14, -0.01); return;


    case 'f':
        FUNC_19(VAR_14);
        return;

    case ' ':
        FUNC_7(VAR_14);
        FUNC_14(VAR_14);
        FUNC_15(VAR_14);
        return;
    case 's':
        FUNC_7(VAR_14);
        FUNC_13(VAR_14);
        FUNC_15(VAR_14);
        return;

    case 'e': FUNC_2(VAR_13, VAR_14); return;

    case '[':
        FUNC_7(VAR_14);
        FUNC_12(VAR_14);
        FUNC_15(VAR_14);
        return;
    case ']':
        FUNC_7(VAR_14);
        FUNC_9(VAR_14);
        FUNC_15(VAR_14);
        return;
    case '<':
        FUNC_7(VAR_14);
        FUNC_11(VAR_14);
        FUNC_15(VAR_14);
        return;
    case '>':
        FUNC_7(VAR_14);
        FUNC_8(VAR_14);
        FUNC_15(VAR_14);
        return;

    case 'p':
        FUNC_20(VAR_17);
        FUNC_22(VAR_17);
        FUNC_23(VAR_17);
        break;
    case 'n':
        FUNC_20(VAR_17);
        FUNC_21(VAR_17);
        FUNC_23(VAR_17);
        break;

    case 'a':
        FUNC_7(VAR_14);
        FUNC_17(VAR_14, 1, ((void*)0));
        FUNC_15(VAR_14);
        break;
    case 'z':
        FUNC_7(VAR_14);
        FUNC_16(VAR_14, 1, ((void*)0));
        FUNC_15(VAR_14);
        break;
    case 'm':
        FUNC_7(VAR_14);
        FUNC_18(VAR_14);
        FUNC_15(VAR_14);
        break;

    case 'c':
        FUNC_7(VAR_14);
        FUNC_10(VAR_14, VAR_0);
        FUNC_15(VAR_14);
        break;
    case 'v':
        FUNC_7(VAR_14);
        FUNC_10(VAR_14, VAR_11);
        FUNC_15(VAR_14);
        break;
    case 'b':
        FUNC_7(VAR_14);
        FUNC_10(VAR_14, VAR_12);
        FUNC_15(VAR_14);
        break;

    case 0x0c:
    case 131:
        break;

    default:
        return;
    }

    FUNC_3();
    return;
}
