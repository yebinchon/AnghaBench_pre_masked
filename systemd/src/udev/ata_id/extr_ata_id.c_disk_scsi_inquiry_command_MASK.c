
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sg_io_v4 {char guard; int request_len; uintptr_t request; int max_response_len; uintptr_t response; size_t din_xfer_len; uintptr_t din_xferp; char interface_id; unsigned char* cmdp; int cmd_len; void* dxferp; size_t dxfer_len; int* sbp; int mx_sb_len; scalar_t__ status; scalar_t__ host_status; scalar_t__ driver_status; scalar_t__ device_status; scalar_t__ transport_status; int timeout; int dxfer_direction; int subprotocol; int protocol; } ;
struct sg_io_hdr {char guard; int request_len; uintptr_t request; int max_response_len; uintptr_t response; size_t din_xfer_len; uintptr_t din_xferp; char interface_id; unsigned char* cmdp; int cmd_len; void* dxferp; size_t dxfer_len; int* sbp; int mx_sb_len; scalar_t__ status; scalar_t__ host_status; scalar_t__ driver_status; scalar_t__ device_status; scalar_t__ transport_status; int timeout; int dxfer_direction; int subprotocol; int protocol; } ;
typedef int sense ;
typedef int cdb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,int ,struct sg_io_v4*) ;

__attribute__((used)) static int FUNC_1(
                int VAR_8,
                void *VAR_9,
                size_t VAR_10) {

        uint8_t VAR_11[6] = {

                [0] = 0x12,
                [3] = (VAR_10 >> 8),
                [4] = (VAR_10 & 0xff),
        };
        uint8_t VAR_12[32] = {};
        struct sg_io_v4 VAR_13 = {
                .guard = 'Q',
                .protocol = VAR_0,
                .subprotocol = VAR_1,
                .request_len = sizeof(VAR_11),
                .request = (uintptr_t) VAR_11,
                .max_response_len = sizeof(VAR_12),
                .response = (uintptr_t) VAR_12,
                .din_xfer_len = VAR_10,
                .din_xferp = (uintptr_t) VAR_9,
                .timeout = VAR_2,
        };
        int VAR_14;

        VAR_14 = FUNC_0(VAR_8, VAR_6, &VAR_13);
        if (VAR_14 != 0) {

                if (VAR_7 == VAR_3) {
                        struct sg_io_hdr VAR_15 = {
                                .interface_id = 'S',
                                .cmdp = (unsigned char*) VAR_11,
                                .cmd_len = sizeof (VAR_11),
                                .dxferp = VAR_9,
                                .dxfer_len = VAR_10,
                                .sbp = VAR_12,
                                .mx_sb_len = sizeof(VAR_12),
                                .dxfer_direction = VAR_5,
                                .timeout = VAR_2,
                        };

                        VAR_14 = FUNC_0(VAR_8, VAR_6, &VAR_15);
                        if (VAR_14 != 0)
                                return VAR_14;


                        if (!(VAR_15.status == 0 &&
                              VAR_15.host_status == 0 &&
                              VAR_15.driver_status == 0)) {
                                VAR_7 = VAR_4;
                                return -1;
                        }
                } else
                        return VAR_14;
        }


        if (!(VAR_13 == 0 &&
              VAR_13 == 0 &&
              VAR_13 == 0)) {
                VAR_7 = VAR_4;
                return -1;
        }

        return 0;
}
