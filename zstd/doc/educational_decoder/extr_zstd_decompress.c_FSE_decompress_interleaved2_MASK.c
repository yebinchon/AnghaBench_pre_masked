
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int ostream_t ;
typedef int istream_t ;
typedef scalar_t__ i64 ;
typedef int FSE_dtable ;


 int FUNC_0 (int const* const,int *,int const* const,scalar_t__*) ;
 int FUNC_1 (int const* const,int *,int const* const,scalar_t__*) ;
 int FUNC_2 (int const* const,int ) ;
 int FUNC_3 () ;
 int * FUNC_4 (int * const,size_t const) ;
 size_t FUNC_5 (int * const) ;
 int FUNC_6 (int * const,int ) ;
 int FUNC_7 (int const) ;

__attribute__((used)) static size_t FUNC_8(const FSE_dtable *const VAR_0,
                                          ostream_t *const VAR_1,
                                          istream_t *const VAR_2) {
    const size_t VAR_3 = FUNC_5(VAR_2);
    if (VAR_3 == 0) {
        FUNC_3();
    }
    const u8 *const VAR_4 = FUNC_4(VAR_2, VAR_3);
    const int VAR_5 = 8 - FUNC_7(VAR_4[VAR_3 - 1]);
    i64 VAR_6 = VAR_3 * 8 - VAR_5;

    u16 VAR_7, VAR_8;




    FUNC_1(VAR_0, &VAR_7, VAR_4, &VAR_6);
    FUNC_1(VAR_0, &VAR_8, VAR_4, &VAR_6);




    size_t VAR_9 = 0;
    while (1) {





        FUNC_6(VAR_1, FUNC_0(VAR_0, &VAR_7, VAR_4, &VAR_6));
        VAR_9++;
        if (VAR_6 < 0) {

            FUNC_6(VAR_1, FUNC_2(VAR_0, VAR_8));
            VAR_9++;
            break;
        }

        FUNC_6(VAR_1, FUNC_0(VAR_0, &VAR_8, VAR_4, &VAR_6));
        VAR_9++;
        if (VAR_6 < 0) {

            FUNC_6(VAR_1, FUNC_2(VAR_0, VAR_7));
            VAR_9++;
            break;
        }
    }

    return VAR_9;
}
