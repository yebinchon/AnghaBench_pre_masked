
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef size_t seq_part_t ;
typedef int seq_mode_t ;
typedef int istream_t ;
typedef int i16 ;
struct TYPE_7__ {int symbols; } ;
typedef TYPE_1__ FSE_dtable ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__* const,int * const,size_t const) ;
 int FUNC_2 (TYPE_1__* const) ;
 int FUNC_3 (TYPE_1__* const,int const*,size_t const,size_t const) ;
 int FUNC_4 (TYPE_1__* const,int const) ;
 int FUNC_5 () ;
 int * FUNC_6 (int * const,int) ;
 int const* const VAR_0 ;
 int const* const VAR_1 ;
 int const* const VAR_2 ;





__attribute__((used)) static void FUNC_7(FSE_dtable *const VAR_3, istream_t *const VAR_4,
                             const seq_part_t VAR_5, const seq_mode_t VAR_6) {

    const i16 *const VAR_7[] = {VAR_0,
                                                VAR_2,
                                                VAR_1};
    const size_t VAR_8[] = {36, 29, 53};
    const size_t VAR_9[] = {6, 5, 6};

    const size_t VAR_10[] = {9, 8, 9};

    if (VAR_6 != 129) {

        FUNC_2(VAR_3);
    }

    switch (VAR_6) {
    case 130: {

        const i16 *VAR_11 = VAR_7[VAR_5];
        const size_t VAR_12 = VAR_8[VAR_5];
        const size_t VAR_13 = VAR_9[VAR_5];

        FUNC_3(VAR_3, VAR_11, VAR_12, VAR_13);
        break;
    }
    case 128: {

        const u8 VAR_14 = FUNC_6(VAR_4, 1)[0];
        FUNC_4(VAR_3, VAR_14);
        break;
    }
    case 131: {


        FUNC_1(VAR_3, VAR_4, VAR_10[VAR_5]);
        break;
    }
    case 129:



        if (!VAR_3->symbols) {

            FUNC_0();
        }
        break;
    default:

        FUNC_5();
        break;
    }

}
