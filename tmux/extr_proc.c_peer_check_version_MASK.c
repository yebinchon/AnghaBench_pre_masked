
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmuxpeer {int flags; } ;
struct TYPE_2__ {int peerid; scalar_t__ type; } ;
struct imsg {TYPE_1__ hdr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct tmuxpeer*,int) ;
 int FUNC_1 (struct tmuxpeer*,scalar_t__,int,int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct tmuxpeer *VAR_3, struct imsg *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_4->hdr.peerid & 0xff;
 if (VAR_4->hdr.type != VAR_0 && VAR_5 != VAR_2) {
  FUNC_0("peer %p bad version %d", VAR_3, VAR_5);

  FUNC_1(VAR_3, VAR_0, -1, ((void*)0), 0);
  VAR_3->flags |= VAR_1;

  return (-1);
 }
 return (0);
}
