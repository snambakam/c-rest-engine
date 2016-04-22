/*
 * Copyright © 2012-2015 VMware, Inc.  All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the ~@~\License~@~]); you may not
 * use this file except in compliance with the License.  You may obtain a copy
 * of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an ~@~\AS IS~@~] BASIS, without
 * warranties or conditions of any kind, EITHER EXPRESS OR IMPLIED.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#include "includes.h"

uint32_t 
VmRESTHandleHTTP_GET(
    PREST_REQUEST                    pRequest,
    PREST_RESPONSE*                  ppResponse
    )
{
    uint32_t dwError = 0;
    BAIL_ON_VMREST_ERROR(dwError);
    
    write(1, "\nThis is App CB for GET", 23);    


cleanup:

    return dwError;

error:

    goto cleanup;
}    

uint32_t
VmRESTHandleHTTP_POST(
    PREST_REQUEST                    pRequest,
    PREST_RESPONSE*                  ppResponse 
    )
{
    uint32_t dwError = 0;
    BAIL_ON_VMREST_ERROR(dwError);



cleanup:

    return dwError;

error:

    goto cleanup;
}

uint32_t
VmRESTHandleHTTP_DELETE(
    PREST_REQUEST                    pRequest,
    PREST_RESPONSE*                  ppResponse 
    )
{
    uint32_t dwError = 0;
    BAIL_ON_VMREST_ERROR(dwError);



cleanup:

    return dwError;

error:

    goto cleanup;
}

uint32_t
VmRESTHandleHTTP_PUT(
    PREST_REQUEST                    pRequest,
    PREST_RESPONSE*                  ppResponse 
    )
{
    uint32_t dwError = 0;
    BAIL_ON_VMREST_ERROR(dwError);



cleanup:

    return dwError;

error:

    goto cleanup;
}

uint32_t
VmRESTHandleHTTP_HEAD(
    PREST_REQUEST                    pRequest,
    PREST_RESPONSE*                  ppResponse 
    )
{
    uint32_t dwError = 0;
    BAIL_ON_VMREST_ERROR(dwError);



cleanup:

    return dwError;

error:

    goto cleanup;
}

uint32_t
VmRESTHandleHTTP_TRACE(
    PREST_REQUEST                    pRequest,
    PREST_RESPONSE*                  ppResponse 
    )
{
    uint32_t dwError = 0;
    BAIL_ON_VMREST_ERROR(dwError);



cleanup:

    return dwError;

error:

    goto cleanup;
}

uint32_t
VmRESTHandleHTTP_CONNECT(
    PREST_REQUEST                    pRequest,
    PREST_RESPONSE*                  ppResponse 
    )
{
    uint32_t dwError = 0;
    BAIL_ON_VMREST_ERROR(dwError);



cleanup:

    return dwError;

error:

    goto cleanup;
}

