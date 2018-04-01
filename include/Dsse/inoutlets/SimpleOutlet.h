
#pragma once
#ifndef DSSE_FLOATOUTLET_H
#define DSSE_FLOATOUTLET_H

#include "Dsse/inoutlets/OutletBase.h"

namespace dsse
{
class NodeBase;
class DataBox;
class InletBase;

class DSSE_EXPORT SimpleOutlet : public OutletBase
{
    friend class Dsse;

public:
	SimpleOutlet(NodeBase* node, DataBox* databox, String name, String desc);
	~SimpleOutlet();
	NodeBase* getNode();

    void SendData();

	bool CanConnectTo(InletBase* inlet);

protected:
	bool ConnectTo(InletBase* inlet);
};

}
#endif // ifndef DSSE_FLOATOUTLET_H
