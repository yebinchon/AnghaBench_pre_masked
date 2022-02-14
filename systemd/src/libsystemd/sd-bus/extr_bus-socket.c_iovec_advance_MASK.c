
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iovec {size_t iov_len; int * iov_base; } ;


 struct iovec FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct iovec VAR_0[], unsigned *VAR_1, size_t VAR_2) {

        while (VAR_2 > 0) {
                struct iovec *VAR_3 = VAR_0 + *VAR_1;

                if (VAR_3->iov_len > VAR_2) {
                        VAR_3->iov_base = (uint8_t*) VAR_3->iov_base + VAR_2;
                        VAR_3->iov_len -= VAR_2;
                        return;
                }

                VAR_2 -= VAR_3->iov_len;

                *VAR_3 = FUNC_0(((void*)0), 0);

                (*VAR_1)++;
        }
}
