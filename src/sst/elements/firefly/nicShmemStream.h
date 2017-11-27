// Copyright 2009-2017 Sandia Corporation. Under the terms
// of Contract DE-NA0003525 with Sandia Corporation, the U.S.
// Government retains certain rights in this software.
//
// Copyright (c) 2009-2017, Sandia Corporation
// All rights reserved.
//
// Portions are copyright of other developers:
// See the file CONTRIBUTORS.TXT in the top level directory
// the distribution for more information.
//
// This file is part of the SST software package. For license
// information, see the LICENSE file in the top level directory of the
// distribution.

class ShmemStream : public StreamBase {
  public:
    //typedef std::function<void()> Callback;

    ShmemStream( Output&, FireflyNetworkEvent*, RecvMachine& );

  private:
    void processAck( ShmemMsgHdr&, FireflyNetworkEvent*, int, int );
    void processPut( ShmemMsgHdr&, FireflyNetworkEvent*, int, int );
    void processGetResp( ShmemMsgHdr&, FireflyNetworkEvent*, int, int );
    void processGet( ShmemMsgHdr&, FireflyNetworkEvent*, int, int );
    void processFadd( ShmemMsgHdr&, FireflyNetworkEvent*, int, int );
    void processAdd( ShmemMsgHdr&, FireflyNetworkEvent*, int, int );
    void processCswap( ShmemMsgHdr&, FireflyNetworkEvent*, int, int );
    void processSwap( ShmemMsgHdr&, FireflyNetworkEvent*, int, int );
    ShmemMsgHdr m_shmemHdr;
};
