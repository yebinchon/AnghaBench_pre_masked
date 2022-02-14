
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int c_cflag; } ;
struct ttyfd {scalar_t__ fd; TYPE_1__ tio_orig; TYPE_1__ tio_new; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 int FUNC_3 (scalar_t__,int ,TYPE_1__*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct ttyfd *VAR_5)
{

 FUNC_2(VAR_5->fd, &VAR_5->tio_orig);

 VAR_5->tio_new = VAR_5->tio_orig;
 FUNC_1(&VAR_5->tio_new);
 VAR_5->tio_new.c_cflag |= VAR_0;
 FUNC_3(VAR_5->fd, VAR_2, &VAR_5->tio_new);

 if (VAR_5->fd == VAR_1) {
  VAR_3 = VAR_5->tio_orig;
  FUNC_0(VAR_4);
 }
}
