#include "generated_behaviors_8.h"

namespace behaviac
{
	// Source file: node_test/selector_ut_0

	class Action_bt_node_test_selector_ut_0_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_0_node1, Action);
		Action_bt_node_test_selector_ut_0_node1()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_selector_ut_0_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_0_node2, Action);
		Action_bt_node_test_selector_ut_0_node2()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

	class Action_bt_node_test_selector_ut_0_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_0_node3, Action);
		Action_bt_node_test_selector_ut_0_node3()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

		bool bt_node_test_selector_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Selector* node0 = BEHAVIAC_NEW Selector;
				node0->SetClassNameString("Selector");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_selector_ut_0_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_0_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_selector_ut_0_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_0_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_selector_ut_0_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_0_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_ut_1

	class Action_bt_node_test_selector_ut_1_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_1_node1, Action);
		Action_bt_node_test_selector_ut_1_node1()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

	class Action_bt_node_test_selector_ut_1_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_1_node2, Action);
		Action_bt_node_test_selector_ut_1_node2()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_selector_ut_1_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_1_node3, Action);
		Action_bt_node_test_selector_ut_1_node3()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

		bool bt_node_test_selector_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Selector* node0 = BEHAVIAC_NEW Selector;
				node0->SetClassNameString("Selector");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_selector_ut_1_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_1_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_selector_ut_1_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_1_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_selector_ut_1_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_1_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_ut_2

	class Action_bt_node_test_selector_ut_2_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_2_node1, Action);
		Action_bt_node_test_selector_ut_2_node1()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

	class Action_bt_node_test_selector_ut_2_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_2_node2, Action);
		Action_bt_node_test_selector_ut_2_node2()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

	class Action_bt_node_test_selector_ut_2_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_2_node3, Action);
		Action_bt_node_test_selector_ut_2_node3()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_selector_ut_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_ut_2");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Selector* node0 = BEHAVIAC_NEW Selector;
				node0->SetClassNameString("Selector");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_selector_ut_2_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_2_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_selector_ut_2_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_2_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_selector_ut_2_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_2_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_ut_3

	class Action_bt_node_test_selector_ut_3_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_3_node1, Action);
		Action_bt_node_test_selector_ut_3_node1()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

	class Action_bt_node_test_selector_ut_3_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_3_node2, Action);
		Action_bt_node_test_selector_ut_3_node2()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

	class Action_bt_node_test_selector_ut_3_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_3_node3, Action);
		Action_bt_node_test_selector_ut_3_node3()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

		bool bt_node_test_selector_ut_3::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_ut_3");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Selector* node0 = BEHAVIAC_NEW Selector;
				node0->SetClassNameString("Selector");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_selector_ut_3_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_3_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_selector_ut_3_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_3_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_selector_ut_3_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_3_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_ut_4

	class Action_bt_node_test_selector_ut_4_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_4_node1, Action);
		Action_bt_node_test_selector_ut_4_node1()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_selector_ut_4_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_4_node2, Action);
		Action_bt_node_test_selector_ut_4_node2()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_selector_ut_4_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_4_node3, Action);
		Action_bt_node_test_selector_ut_4_node3()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_selector_ut_4::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_ut_4");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Selector* node0 = BEHAVIAC_NEW Selector;
				node0->SetClassNameString("Selector");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_selector_ut_4_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_4_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_selector_ut_4_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_4_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_selector_ut_4_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_4_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_ut_5

	class Condition_bt_node_test_selector_ut_5_node5 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_selector_ut_5_node5, Condition);
		Condition_bt_node_test_selector_ut_5_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EnumTest& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testColor, EnumTest >();
			EnumTest opr = EnumTest_One;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_selector_ut_5_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_5_node1, Action);
		Action_bt_node_test_selector_ut_5_node1()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Condition_bt_node_test_selector_ut_5_node7 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_selector_ut_5_node7, Condition);
		Condition_bt_node_test_selector_ut_5_node7()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EnumTest& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testColor, EnumTest >();
			EnumTest opr = EnumTest_OneAfterOne;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_selector_ut_5_node8 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_5_node8, Action);
		Action_bt_node_test_selector_ut_5_node8()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_selector_ut_5_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_5_node3, Action);
		Action_bt_node_test_selector_ut_5_node3()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Condition_bt_node_test_selector_ut_5_node11 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_selector_ut_5_node11, Condition);
		Condition_bt_node_test_selector_ut_5_node11()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EnumTest& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testColor, EnumTest >();
			EnumTest opr = EnumTest_One;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_selector_ut_5_node12 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_5_node12, Action);
		Action_bt_node_test_selector_ut_5_node12()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Condition_bt_node_test_selector_ut_5_node14 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_selector_ut_5_node14, Condition);
		Condition_bt_node_test_selector_ut_5_node14()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EnumTest& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testColor, EnumTest >();
			EnumTest opr = EnumTest_OneAfterOne;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_selector_ut_5_node15 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_5_node15, Action);
		Action_bt_node_test_selector_ut_5_node15()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_selector_ut_5_node16 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_ut_5_node16, Action);
		Action_bt_node_test_selector_ut_5_node16()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_selector_ut_5::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_ut_5");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Selector* node2 = BEHAVIAC_NEW Selector;
				node2->SetClassNameString("Selector");
				node2->SetId(2);
#if !BEHAVIAC_RELEASE
				node2->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node2);
				{
					Selector* node0 = BEHAVIAC_NEW Selector;
					node0->SetClassNameString("Selector");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("AgentNodeTest");
#endif
					node2->AddChild(node0);
					{
						Sequence* node4 = BEHAVIAC_NEW Sequence;
						node4->SetClassNameString("Sequence");
						node4->SetId(4);
#if !BEHAVIAC_RELEASE
						node4->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node4);
						{
							Condition_bt_node_test_selector_ut_5_node5* node5 = BEHAVIAC_NEW Condition_bt_node_test_selector_ut_5_node5;
							node5->SetClassNameString("Condition");
							node5->SetId(5);
#if !BEHAVIAC_RELEASE
							node5->SetAgentType("AgentNodeTest");
#endif
							node4->AddChild(node5);
							node4->SetHasEvents(node4->HasEvents() | node5->HasEvents());
						}
						{
							Action_bt_node_test_selector_ut_5_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_5_node1;
							node1->SetClassNameString("Action");
							node1->SetId(1);
#if !BEHAVIAC_RELEASE
							node1->SetAgentType("AgentNodeTest");
#endif
							node4->AddChild(node1);
							node4->SetHasEvents(node4->HasEvents() | node1->HasEvents());
						}
						node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
					}
					{
						Sequence* node6 = BEHAVIAC_NEW Sequence;
						node6->SetClassNameString("Sequence");
						node6->SetId(6);
#if !BEHAVIAC_RELEASE
						node6->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node6);
						{
							Condition_bt_node_test_selector_ut_5_node7* node7 = BEHAVIAC_NEW Condition_bt_node_test_selector_ut_5_node7;
							node7->SetClassNameString("Condition");
							node7->SetId(7);
#if !BEHAVIAC_RELEASE
							node7->SetAgentType("AgentNodeTest");
#endif
							node6->AddChild(node7);
							node6->SetHasEvents(node6->HasEvents() | node7->HasEvents());
						}
						{
							Action_bt_node_test_selector_ut_5_node8* node8 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_5_node8;
							node8->SetClassNameString("Action");
							node8->SetId(8);
#if !BEHAVIAC_RELEASE
							node8->SetAgentType("AgentNodeTest");
#endif
							node6->AddChild(node8);
							node6->SetHasEvents(node6->HasEvents() | node8->HasEvents());
						}
						node0->SetHasEvents(node0->HasEvents() | node6->HasEvents());
					}
					{
						Action_bt_node_test_selector_ut_5_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_5_node3;
						node3->SetClassNameString("Action");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node3);
						node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
					}
					node2->SetHasEvents(node2->HasEvents() | node0->HasEvents());
				}
				{
					Selector* node9 = BEHAVIAC_NEW Selector;
					node9->SetClassNameString("Selector");
					node9->SetId(9);
#if !BEHAVIAC_RELEASE
					node9->SetAgentType("AgentNodeTest");
#endif
					node2->AddChild(node9);
					{
						Sequence* node10 = BEHAVIAC_NEW Sequence;
						node10->SetClassNameString("Sequence");
						node10->SetId(10);
#if !BEHAVIAC_RELEASE
						node10->SetAgentType("AgentNodeTest");
#endif
						node9->AddChild(node10);
						{
							Condition_bt_node_test_selector_ut_5_node11* node11 = BEHAVIAC_NEW Condition_bt_node_test_selector_ut_5_node11;
							node11->SetClassNameString("Condition");
							node11->SetId(11);
#if !BEHAVIAC_RELEASE
							node11->SetAgentType("AgentNodeTest");
#endif
							node10->AddChild(node11);
							node10->SetHasEvents(node10->HasEvents() | node11->HasEvents());
						}
						{
							Action_bt_node_test_selector_ut_5_node12* node12 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_5_node12;
							node12->SetClassNameString("Action");
							node12->SetId(12);
#if !BEHAVIAC_RELEASE
							node12->SetAgentType("AgentNodeTest");
#endif
							node10->AddChild(node12);
							node10->SetHasEvents(node10->HasEvents() | node12->HasEvents());
						}
						node9->SetHasEvents(node9->HasEvents() | node10->HasEvents());
					}
					{
						Sequence* node13 = BEHAVIAC_NEW Sequence;
						node13->SetClassNameString("Sequence");
						node13->SetId(13);
#if !BEHAVIAC_RELEASE
						node13->SetAgentType("AgentNodeTest");
#endif
						node9->AddChild(node13);
						{
							Condition_bt_node_test_selector_ut_5_node14* node14 = BEHAVIAC_NEW Condition_bt_node_test_selector_ut_5_node14;
							node14->SetClassNameString("Condition");
							node14->SetId(14);
#if !BEHAVIAC_RELEASE
							node14->SetAgentType("AgentNodeTest");
#endif
							node13->AddChild(node14);
							node13->SetHasEvents(node13->HasEvents() | node14->HasEvents());
						}
						{
							Action_bt_node_test_selector_ut_5_node15* node15 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_5_node15;
							node15->SetClassNameString("Action");
							node15->SetId(15);
#if !BEHAVIAC_RELEASE
							node15->SetAgentType("AgentNodeTest");
#endif
							node13->AddChild(node15);
							node13->SetHasEvents(node13->HasEvents() | node15->HasEvents());
						}
						node9->SetHasEvents(node9->HasEvents() | node13->HasEvents());
					}
					{
						Action_bt_node_test_selector_ut_5_node16* node16 = BEHAVIAC_NEW Action_bt_node_test_selector_ut_5_node16;
						node16->SetClassNameString("Action");
						node16->SetId(16);
#if !BEHAVIAC_RELEASE
						node16->SetAgentType("AgentNodeTest");
#endif
						node9->AddChild(node16);
						node9->SetHasEvents(node9->HasEvents() | node16->HasEvents());
					}
					node2->SetHasEvents(node2->HasEvents() | node9->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node2->HasEvents());
			}
			return true;
		}

	// Source file: node_test/sequence_stochastic_ut_0

	class SequenceStochastic_bt_node_test_sequence_stochastic_ut_0_node0 : public SequenceStochastic
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(SequenceStochastic_bt_node_test_sequence_stochastic_ut_0_node0, SequenceStochastic);
		SequenceStochastic_bt_node_test_sequence_stochastic_ut_0_node0()
		{
		}
	public:
		void Initialize(const char* method)
		{
			this->m_method = Action::LoadMethod(method);
		}
	};

	class Action_bt_node_test_sequence_stochastic_ut_0_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_stochastic_ut_0_node1, Action);
		Action_bt_node_test_sequence_stochastic_ut_0_node1()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_sequence_stochastic_ut_0_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_stochastic_ut_0_node2, Action);
		Action_bt_node_test_sequence_stochastic_ut_0_node2()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_sequence_stochastic_ut_0_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_stochastic_ut_0_node3, Action);
		Action_bt_node_test_sequence_stochastic_ut_0_node3()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_sequence_stochastic_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/sequence_stochastic_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				SequenceStochastic_bt_node_test_sequence_stochastic_ut_0_node0* node0 = BEHAVIAC_NEW SequenceStochastic_bt_node_test_sequence_stochastic_ut_0_node0;
				node0->SetClassNameString("SequenceStochastic");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_sequence_stochastic_ut_0_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_sequence_stochastic_ut_0_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_sequence_stochastic_ut_0_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_sequence_stochastic_ut_0_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_sequence_stochastic_ut_0_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_sequence_stochastic_ut_0_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/sequence_stochastic_ut_1

	class SequenceStochastic_bt_node_test_sequence_stochastic_ut_1_node0 : public SequenceStochastic
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(SequenceStochastic_bt_node_test_sequence_stochastic_ut_1_node0, SequenceStochastic);
		SequenceStochastic_bt_node_test_sequence_stochastic_ut_1_node0()
		{
		}
	public:
		void Initialize(const char* method)
		{
			this->m_method = Action::LoadMethod(method);
		}
	};

	class Action_bt_node_test_sequence_stochastic_ut_1_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_stochastic_ut_1_node1, Action);
		Action_bt_node_test_sequence_stochastic_ut_1_node1()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_sequence_stochastic_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/sequence_stochastic_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				SequenceStochastic_bt_node_test_sequence_stochastic_ut_1_node0* node0 = BEHAVIAC_NEW SequenceStochastic_bt_node_test_sequence_stochastic_ut_1_node0;
				node0->SetClassNameString("SequenceStochastic");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_sequence_stochastic_ut_1_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_sequence_stochastic_ut_1_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					False* node2 = BEHAVIAC_NEW False;
					node2->SetClassNameString("False");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					False* node3 = BEHAVIAC_NEW False;
					node3->SetClassNameString("False");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/sequence_stochastic_ut_2

	class SequenceStochastic_bt_node_test_sequence_stochastic_ut_2_node0 : public SequenceStochastic
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(SequenceStochastic_bt_node_test_sequence_stochastic_ut_2_node0, SequenceStochastic);
		SequenceStochastic_bt_node_test_sequence_stochastic_ut_2_node0()
		{
		}
	public:
		void Initialize(const char* method)
		{
			this->m_method = Action::LoadMethod(method);
		}
	};

	class Action_bt_node_test_sequence_stochastic_ut_2_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_stochastic_ut_2_node1, Action);
		Action_bt_node_test_sequence_stochastic_ut_2_node1()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_sequence_stochastic_ut_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/sequence_stochastic_ut_2");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				SequenceStochastic_bt_node_test_sequence_stochastic_ut_2_node0* node0 = BEHAVIAC_NEW SequenceStochastic_bt_node_test_sequence_stochastic_ut_2_node0;
				node0->SetClassNameString("SequenceStochastic");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					False* node2 = BEHAVIAC_NEW False;
					node2->SetClassNameString("False");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_sequence_stochastic_ut_2_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_sequence_stochastic_ut_2_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					False* node3 = BEHAVIAC_NEW False;
					node3->SetClassNameString("False");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/sequence_stochastic_ut_3

	class SequenceStochastic_bt_node_test_sequence_stochastic_ut_3_node0 : public SequenceStochastic
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(SequenceStochastic_bt_node_test_sequence_stochastic_ut_3_node0, SequenceStochastic);
		SequenceStochastic_bt_node_test_sequence_stochastic_ut_3_node0()
		{
		}
	public:
		void Initialize(const char* method)
		{
			this->m_method = Action::LoadMethod(method);
		}
	};

	class Action_bt_node_test_sequence_stochastic_ut_3_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_stochastic_ut_3_node1, Action);
		Action_bt_node_test_sequence_stochastic_ut_3_node1()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_sequence_stochastic_ut_3::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/sequence_stochastic_ut_3");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				SequenceStochastic_bt_node_test_sequence_stochastic_ut_3_node0* node0 = BEHAVIAC_NEW SequenceStochastic_bt_node_test_sequence_stochastic_ut_3_node0;
				node0->SetClassNameString("SequenceStochastic");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					False* node2 = BEHAVIAC_NEW False;
					node2->SetClassNameString("False");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					False* node3 = BEHAVIAC_NEW False;
					node3->SetClassNameString("False");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				{
					Action_bt_node_test_sequence_stochastic_ut_3_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_sequence_stochastic_ut_3_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/sequence_ut_0

	class Action_bt_node_test_sequence_ut_0_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_ut_0_node1, Action);
		Action_bt_node_test_sequence_ut_0_node1()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

	class Action_bt_node_test_sequence_ut_0_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_ut_0_node2, Action);
		Action_bt_node_test_sequence_ut_0_node2()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

	class Action_bt_node_test_sequence_ut_0_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_ut_0_node3, Action);
		Action_bt_node_test_sequence_ut_0_node3()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

		bool bt_node_test_sequence_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/sequence_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_sequence_ut_0_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_sequence_ut_0_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_sequence_ut_0_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_sequence_ut_0_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_sequence_ut_0_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_sequence_ut_0_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/sequence_ut_1

	class Action_bt_node_test_sequence_ut_1_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_ut_1_node1, Action);
		Action_bt_node_test_sequence_ut_1_node1()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_sequence_ut_1_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_ut_1_node2, Action);
		Action_bt_node_test_sequence_ut_1_node2()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

	class Action_bt_node_test_sequence_ut_1_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_ut_1_node3, Action);
		Action_bt_node_test_sequence_ut_1_node3()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

		bool bt_node_test_sequence_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/sequence_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_sequence_ut_1_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_sequence_ut_1_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_sequence_ut_1_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_sequence_ut_1_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_sequence_ut_1_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_sequence_ut_1_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/sequence_ut_2

	class Action_bt_node_test_sequence_ut_2_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_ut_2_node1, Action);
		Action_bt_node_test_sequence_ut_2_node1()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_sequence_ut_2_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_ut_2_node2, Action);
		Action_bt_node_test_sequence_ut_2_node2()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_sequence_ut_2_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_ut_2_node3, Action);
		Action_bt_node_test_sequence_ut_2_node3()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

		bool bt_node_test_sequence_ut_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/sequence_ut_2");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_sequence_ut_2_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_sequence_ut_2_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_sequence_ut_2_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_sequence_ut_2_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_sequence_ut_2_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_sequence_ut_2_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/sequence_ut_3

	class Action_bt_node_test_sequence_ut_3_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_ut_3_node1, Action);
		Action_bt_node_test_sequence_ut_3_node1()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

	class Action_bt_node_test_sequence_ut_3_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_ut_3_node2, Action);
		Action_bt_node_test_sequence_ut_3_node2()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_sequence_ut_3_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_sequence_ut_3_node3, Action);
		Action_bt_node_test_sequence_ut_3_node3()
		{
			method_p0 = 2;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

		bool bt_node_test_sequence_ut_3::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/sequence_ut_3");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_sequence_ut_3_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_sequence_ut_3_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_sequence_ut_3_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_sequence_ut_3_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_sequence_ut_3_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_sequence_ut_3_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

}
