
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int uio_iovcnt; TYPE_2__* uio_iov; } ;
typedef TYPE_1__ uio_t ;
typedef int uint_t ;
typedef int uint8_t ;
struct TYPE_8__ {int iov_len; int * iov_base; } ;
typedef TYPE_2__ iovec_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_3(boolean_t VAR_2, uint8_t *VAR_3,
    uint8_t *VAR_4, uint_t VAR_5, uio_t *VAR_6, uio_t *VAR_7,
    uint_t *VAR_8)
{
 int VAR_9;
 uint_t VAR_10 = 1, VAR_11 = 2;
 iovec_t *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);


 VAR_12 = FUNC_1(VAR_10 * sizeof (iovec_t),
     VAR_1);
 if (!VAR_12) {
  VAR_9 = FUNC_0(VAR_0);
  goto error;
 }

 VAR_13 = FUNC_1(VAR_11 * sizeof (iovec_t),
     VAR_1);
 if (!VAR_13) {
  VAR_9 = FUNC_0(VAR_0);
  goto error;
 }

 VAR_12[0].iov_base = VAR_3;
 VAR_12[0].iov_len = VAR_5;
 VAR_13[0].iov_base = VAR_4;
 VAR_13[0].iov_len = VAR_5;

 *VAR_8 = VAR_5;
 VAR_6->uio_iov = VAR_12;
 VAR_6->uio_iovcnt = VAR_10;
 VAR_7->uio_iov = VAR_13;
 VAR_7->uio_iovcnt = VAR_11;

 return (0);

error:
 if (VAR_12 != ((void*)0))
  FUNC_2(VAR_12, VAR_10 * sizeof (iovec_t));
 if (VAR_13 != ((void*)0))
  FUNC_2(VAR_13, VAR_11 * sizeof (iovec_t));

 *VAR_8 = 0;
 VAR_6->uio_iov = ((void*)0);
 VAR_6->uio_iovcnt = 0;
 VAR_7->uio_iov = ((void*)0);
 VAR_7->uio_iovcnt = 0;
 return (VAR_9);
}
