
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int u; } ;
struct TYPE_4__ {unsigned char* dxferp; size_t dxfer_len; int info; int masked_status; int dxfer_direction; } ;
struct scsi_cmd {TYPE_1__ _sense; TYPE_2__ sg_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmd *VAR_8, int VAR_9, unsigned char *VAR_10, size_t VAR_11) {
        int VAR_12 = 0;

        if (VAR_11 > 0) {
                VAR_8->sg_io.dxferp = VAR_10;
                VAR_8->sg_io.dxfer_len = VAR_11;
                VAR_8->sg_io.dxfer_direction = VAR_2;
        } else
                VAR_8->sg_io.dxfer_direction = VAR_3;

        if (FUNC_1(VAR_9, VAR_6, &VAR_8->sg_io))
                return -1;

        if ((VAR_8->sg_io.info & VAR_5) != VAR_4) {
                VAR_7 = VAR_1;
                VAR_12 = -1;
                if (VAR_8->sg_io.masked_status & VAR_0) {
                        VAR_12 = FUNC_0(VAR_8->_sense.u);
                        if (VAR_12 == 0)
                                VAR_12 = -1;
                }
        }
        return VAR_12;
}
