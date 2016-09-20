#include "generated_behaviors_6.h"

namespace behaviac
{
	// Source file: node_test/predicate_sequence_ut_0

	class DecoratorNot_bt_node_test_predicate_sequence_ut_0_node1 : public DecoratorNot
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorNot_bt_node_test_predicate_sequence_ut_0_node1, DecoratorNot);
		DecoratorNot_bt_node_test_predicate_sequence_ut_0_node1()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
	};

	class Condition_bt_node_test_predicate_sequence_ut_0_node3 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_predicate_sequence_ut_0_node3, Condition);
		Condition_bt_node_test_predicate_sequence_ut_0_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = -1;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_predicate_sequence_ut_0_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_0_node2, Action);
		Action_bt_node_test_predicate_sequence_ut_0_node2()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_1, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_predicate_sequence_ut_0_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_0_node4, Action);
		Action_bt_node_test_predicate_sequence_ut_0_node4()
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

	class Action_bt_node_test_predicate_sequence_ut_0_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_0_node5, Action);
		Action_bt_node_test_predicate_sequence_ut_0_node5()
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

		bool bt_node_test_predicate_sequence_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/predicate_sequence_ut_0");
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
					DecoratorNot_bt_node_test_predicate_sequence_ut_0_node1* node1 = BEHAVIAC_NEW DecoratorNot_bt_node_test_predicate_sequence_ut_0_node1;
					node1->SetClassNameString("DecoratorNot");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->SetCustomCondition(node1);
					{
						Condition_bt_node_test_predicate_sequence_ut_0_node3* node3 = BEHAVIAC_NEW Condition_bt_node_test_predicate_sequence_ut_0_node3;
						node3->SetClassNameString("Condition");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node3);
						node1->SetHasEvents(node1->HasEvents() | node3->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_0_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_0_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_0_node4* node4 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_0_node4;
					node4->SetClassNameString("Action");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_0_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_0_node5;
					node5->SetClassNameString("Action");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node5);
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/predicate_sequence_ut_1

	class DecoratorNot_bt_node_test_predicate_sequence_ut_1_node1 : public DecoratorNot
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorNot_bt_node_test_predicate_sequence_ut_1_node1, DecoratorNot);
		DecoratorNot_bt_node_test_predicate_sequence_ut_1_node1()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
	};

	class Condition_bt_node_test_predicate_sequence_ut_1_node3 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_predicate_sequence_ut_1_node3, Condition);
		Condition_bt_node_test_predicate_sequence_ut_1_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = -1;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_predicate_sequence_ut_1_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_1_node4, Action);
		Action_bt_node_test_predicate_sequence_ut_1_node4()
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

	class Action_bt_node_test_predicate_sequence_ut_1_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_1_node2, Action);
		Action_bt_node_test_predicate_sequence_ut_1_node2()
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

	class Action_bt_node_test_predicate_sequence_ut_1_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_1_node5, Action);
		Action_bt_node_test_predicate_sequence_ut_1_node5()
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

		bool bt_node_test_predicate_sequence_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/predicate_sequence_ut_1");
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
					DecoratorNot_bt_node_test_predicate_sequence_ut_1_node1* node1 = BEHAVIAC_NEW DecoratorNot_bt_node_test_predicate_sequence_ut_1_node1;
					node1->SetClassNameString("DecoratorNot");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->SetCustomCondition(node1);
					{
						Condition_bt_node_test_predicate_sequence_ut_1_node3* node3 = BEHAVIAC_NEW Condition_bt_node_test_predicate_sequence_ut_1_node3;
						node3->SetClassNameString("Condition");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node3);
						node1->SetHasEvents(node1->HasEvents() | node3->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_1_node4* node4 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_1_node4;
					node4->SetClassNameString("Action");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_1_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_1_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_1_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_1_node5;
					node5->SetClassNameString("Action");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node5);
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/predicate_sequence_ut_2

	class DecoratorNot_bt_node_test_predicate_sequence_ut_2_node1 : public DecoratorNot
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorNot_bt_node_test_predicate_sequence_ut_2_node1, DecoratorNot);
		DecoratorNot_bt_node_test_predicate_sequence_ut_2_node1()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
	};

	class Condition_bt_node_test_predicate_sequence_ut_2_node3 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_predicate_sequence_ut_2_node3, Condition);
		Condition_bt_node_test_predicate_sequence_ut_2_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = -1;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_predicate_sequence_ut_2_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_2_node4, Action);
		Action_bt_node_test_predicate_sequence_ut_2_node4()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_1, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_predicate_sequence_ut_2_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_2_node2, Action);
		Action_bt_node_test_predicate_sequence_ut_2_node2()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_2, void, float >(method_p0);
			return BT_SUCCESS;
		}
		float method_p0;
	};

	class Action_bt_node_test_predicate_sequence_ut_2_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_2_node5, Action);
		Action_bt_node_test_predicate_sequence_ut_2_node5()
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

		bool bt_node_test_predicate_sequence_ut_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/predicate_sequence_ut_2");
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
					DecoratorNot_bt_node_test_predicate_sequence_ut_2_node1* node1 = BEHAVIAC_NEW DecoratorNot_bt_node_test_predicate_sequence_ut_2_node1;
					node1->SetClassNameString("DecoratorNot");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->SetCustomCondition(node1);
					{
						Condition_bt_node_test_predicate_sequence_ut_2_node3* node3 = BEHAVIAC_NEW Condition_bt_node_test_predicate_sequence_ut_2_node3;
						node3->SetClassNameString("Condition");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node3);
						node1->SetHasEvents(node1->HasEvents() | node3->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_2_node4* node4 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_2_node4;
					node4->SetClassNameString("Action");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_2_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_2_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_2_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_2_node5;
					node5->SetClassNameString("Action");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node5);
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/predicate_sequence_ut_3

	class DecoratorNot_bt_node_test_predicate_sequence_ut_3_node1 : public DecoratorNot
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorNot_bt_node_test_predicate_sequence_ut_3_node1, DecoratorNot);
		DecoratorNot_bt_node_test_predicate_sequence_ut_3_node1()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
	};

	class Condition_bt_node_test_predicate_sequence_ut_3_node6 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_predicate_sequence_ut_3_node6, Condition);
		Condition_bt_node_test_predicate_sequence_ut_3_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr = -1;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Condition_bt_node_test_predicate_sequence_ut_3_node7 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_predicate_sequence_ut_3_node7, Condition);
		Condition_bt_node_test_predicate_sequence_ut_3_node7()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = -1;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_predicate_sequence_ut_3_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_3_node5, Action);
		Action_bt_node_test_predicate_sequence_ut_3_node5()
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

	class Action_bt_node_test_predicate_sequence_ut_3_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_3_node4, Action);
		Action_bt_node_test_predicate_sequence_ut_3_node4()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_1, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_predicate_sequence_ut_3_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_3_node2, Action);
		Action_bt_node_test_predicate_sequence_ut_3_node2()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_2, void, float >(method_p0);
			return BT_SUCCESS;
		}
		float method_p0;
	};

		bool bt_node_test_predicate_sequence_ut_3::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/predicate_sequence_ut_3");
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
					DecoratorNot_bt_node_test_predicate_sequence_ut_3_node1* node1 = BEHAVIAC_NEW DecoratorNot_bt_node_test_predicate_sequence_ut_3_node1;
					node1->SetClassNameString("DecoratorNot");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->SetCustomCondition(node1);
					{
						Sequence* node3 = BEHAVIAC_NEW Sequence;
						node3->SetClassNameString("Sequence");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node3);
						{
							Condition_bt_node_test_predicate_sequence_ut_3_node6* node6 = BEHAVIAC_NEW Condition_bt_node_test_predicate_sequence_ut_3_node6;
							node6->SetClassNameString("Condition");
							node6->SetId(6);
#if !BEHAVIAC_RELEASE
							node6->SetAgentType("AgentNodeTest");
#endif
							node3->AddChild(node6);
							node3->SetHasEvents(node3->HasEvents() | node6->HasEvents());
						}
						{
							Condition_bt_node_test_predicate_sequence_ut_3_node7* node7 = BEHAVIAC_NEW Condition_bt_node_test_predicate_sequence_ut_3_node7;
							node7->SetClassNameString("Condition");
							node7->SetId(7);
#if !BEHAVIAC_RELEASE
							node7->SetAgentType("AgentNodeTest");
#endif
							node3->AddChild(node7);
							node3->SetHasEvents(node3->HasEvents() | node7->HasEvents());
						}
						node1->SetHasEvents(node1->HasEvents() | node3->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_3_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_3_node5;
					node5->SetClassNameString("Action");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node5);
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_3_node4* node4 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_3_node4;
					node4->SetClassNameString("Action");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_3_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_3_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/predicate_sequence_ut_4

	class DecoratorNot_bt_node_test_predicate_sequence_ut_4_node1 : public DecoratorNot
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorNot_bt_node_test_predicate_sequence_ut_4_node1, DecoratorNot);
		DecoratorNot_bt_node_test_predicate_sequence_ut_4_node1()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
	};

	class Condition_bt_node_test_predicate_sequence_ut_4_node6 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_predicate_sequence_ut_4_node6, Condition);
		Condition_bt_node_test_predicate_sequence_ut_4_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr = -1;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Condition_bt_node_test_predicate_sequence_ut_4_node7 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_predicate_sequence_ut_4_node7, Condition);
		Condition_bt_node_test_predicate_sequence_ut_4_node7()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = -1;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_predicate_sequence_ut_4_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_4_node5, Action);
		Action_bt_node_test_predicate_sequence_ut_4_node5()
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

	class Action_bt_node_test_predicate_sequence_ut_4_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_4_node4, Action);
		Action_bt_node_test_predicate_sequence_ut_4_node4()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_1, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_predicate_sequence_ut_4_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_4_node2, Action);
		Action_bt_node_test_predicate_sequence_ut_4_node2()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_2, void, float >(method_p0);
			return BT_SUCCESS;
		}
		float method_p0;
	};

		bool bt_node_test_predicate_sequence_ut_4::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/predicate_sequence_ut_4");
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
					DecoratorNot_bt_node_test_predicate_sequence_ut_4_node1* node1 = BEHAVIAC_NEW DecoratorNot_bt_node_test_predicate_sequence_ut_4_node1;
					node1->SetClassNameString("DecoratorNot");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->SetCustomCondition(node1);
					{
						Selector* node3 = BEHAVIAC_NEW Selector;
						node3->SetClassNameString("Selector");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node3);
						{
							Condition_bt_node_test_predicate_sequence_ut_4_node6* node6 = BEHAVIAC_NEW Condition_bt_node_test_predicate_sequence_ut_4_node6;
							node6->SetClassNameString("Condition");
							node6->SetId(6);
#if !BEHAVIAC_RELEASE
							node6->SetAgentType("AgentNodeTest");
#endif
							node3->AddChild(node6);
							node3->SetHasEvents(node3->HasEvents() | node6->HasEvents());
						}
						{
							Condition_bt_node_test_predicate_sequence_ut_4_node7* node7 = BEHAVIAC_NEW Condition_bt_node_test_predicate_sequence_ut_4_node7;
							node7->SetClassNameString("Condition");
							node7->SetId(7);
#if !BEHAVIAC_RELEASE
							node7->SetAgentType("AgentNodeTest");
#endif
							node3->AddChild(node7);
							node3->SetHasEvents(node3->HasEvents() | node7->HasEvents());
						}
						node1->SetHasEvents(node1->HasEvents() | node3->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_4_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_4_node5;
					node5->SetClassNameString("Action");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node5);
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_4_node4* node4 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_4_node4;
					node4->SetClassNameString("Action");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_4_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_4_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/predicate_sequence_ut_5

	class DecoratorNot_bt_node_test_predicate_sequence_ut_5_node1 : public DecoratorNot
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorNot_bt_node_test_predicate_sequence_ut_5_node1, DecoratorNot);
		DecoratorNot_bt_node_test_predicate_sequence_ut_5_node1()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
	};

	class Condition_bt_node_test_predicate_sequence_ut_5_node8 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_predicate_sequence_ut_5_node8, Condition);
		Condition_bt_node_test_predicate_sequence_ut_5_node8()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr = -1;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Condition_bt_node_test_predicate_sequence_ut_5_node9 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_predicate_sequence_ut_5_node9, Condition);
		Condition_bt_node_test_predicate_sequence_ut_5_node9()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = 0;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Condition_bt_node_test_predicate_sequence_ut_5_node10 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_predicate_sequence_ut_5_node10, Condition);
		Condition_bt_node_test_predicate_sequence_ut_5_node10()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			float& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_2, float >();
			float opr = -1;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_predicate_sequence_ut_5_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_5_node5, Action);
		Action_bt_node_test_predicate_sequence_ut_5_node5()
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

	class Action_bt_node_test_predicate_sequence_ut_5_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_5_node4, Action);
		Action_bt_node_test_predicate_sequence_ut_5_node4()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_1, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_predicate_sequence_ut_5_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_5_node2, Action);
		Action_bt_node_test_predicate_sequence_ut_5_node2()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_2, void, float >(method_p0);
			return BT_SUCCESS;
		}
		float method_p0;
	};

	class Action_bt_node_test_predicate_sequence_ut_5_node7 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_predicate_sequence_ut_5_node7, Action);
		Action_bt_node_test_predicate_sequence_ut_5_node7()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_2, void, float >(method_p0);
			return BT_SUCCESS;
		}
		float method_p0;
	};

		bool bt_node_test_predicate_sequence_ut_5::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/predicate_sequence_ut_5");
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
					DecoratorNot_bt_node_test_predicate_sequence_ut_5_node1* node1 = BEHAVIAC_NEW DecoratorNot_bt_node_test_predicate_sequence_ut_5_node1;
					node1->SetClassNameString("DecoratorNot");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->SetCustomCondition(node1);
					{
						Sequence* node3 = BEHAVIAC_NEW Sequence;
						node3->SetClassNameString("Sequence");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node3);
						{
							Selector* node6 = BEHAVIAC_NEW Selector;
							node6->SetClassNameString("Selector");
							node6->SetId(6);
#if !BEHAVIAC_RELEASE
							node6->SetAgentType("AgentNodeTest");
#endif
							node3->AddChild(node6);
							{
								Condition_bt_node_test_predicate_sequence_ut_5_node8* node8 = BEHAVIAC_NEW Condition_bt_node_test_predicate_sequence_ut_5_node8;
								node8->SetClassNameString("Condition");
								node8->SetId(8);
#if !BEHAVIAC_RELEASE
								node8->SetAgentType("AgentNodeTest");
#endif
								node6->AddChild(node8);
								node6->SetHasEvents(node6->HasEvents() | node8->HasEvents());
							}
							{
								Condition_bt_node_test_predicate_sequence_ut_5_node9* node9 = BEHAVIAC_NEW Condition_bt_node_test_predicate_sequence_ut_5_node9;
								node9->SetClassNameString("Condition");
								node9->SetId(9);
#if !BEHAVIAC_RELEASE
								node9->SetAgentType("AgentNodeTest");
#endif
								node6->AddChild(node9);
								node6->SetHasEvents(node6->HasEvents() | node9->HasEvents());
							}
							node3->SetHasEvents(node3->HasEvents() | node6->HasEvents());
						}
						{
							Condition_bt_node_test_predicate_sequence_ut_5_node10* node10 = BEHAVIAC_NEW Condition_bt_node_test_predicate_sequence_ut_5_node10;
							node10->SetClassNameString("Condition");
							node10->SetId(10);
#if !BEHAVIAC_RELEASE
							node10->SetAgentType("AgentNodeTest");
#endif
							node3->AddChild(node10);
							node3->SetHasEvents(node3->HasEvents() | node10->HasEvents());
						}
						node1->SetHasEvents(node1->HasEvents() | node3->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_5_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_5_node5;
					node5->SetClassNameString("Action");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node5);
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_5_node4* node4 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_5_node4;
					node4->SetClassNameString("Action");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_5_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_5_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_predicate_sequence_ut_5_node7* node7 = BEHAVIAC_NEW Action_bt_node_test_predicate_sequence_ut_5_node7;
					node7->SetClassNameString("Action");
					node7->SetId(7);
#if !BEHAVIAC_RELEASE
					node7->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node7);
					node0->SetHasEvents(node0->HasEvents() | node7->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/reference_sub_0

	class Task_bt_node_test_reference_sub_0_node7 : public Task
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Task_bt_node_test_reference_sub_0_node7, Task);
		Task_bt_node_test_reference_sub_0_node7()
		{
			this->m_task = (CTaskMethod*)Action::LoadMethod("Self.AgentNodeTest::task_test(0,0)");
			BEHAVIAC_ASSERT(this->m_task != NULL);
			this->m_bHTN = false;
		}
	protected:
	};

	class Assignment_bt_node_test_reference_sub_0_node1 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_reference_sub_0_node1, Assignment);
		Assignment_bt_node_test_reference_sub_0_node1()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("_$local_task_param_$_0") == 2009726548u);
			int& opr = (int&)pAgent->GetVariable<int >(2009726548u);
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr;
			return result;
		}
	};

	class Assignment_bt_node_test_reference_sub_0_node2 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_reference_sub_0_node2, Assignment);
		Assignment_bt_node_test_reference_sub_0_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("_$local_task_param_$_1") == 1859309333u);
			float& opr = (float&)pAgent->GetVariable<float >(1859309333u);
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_2, float >() = opr;
			return result;
		}
	};

		bool bt_node_test_reference_sub_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/reference_sub_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// pars
			pBT->AddPar("AgentNodeTest", "int", "_$local_task_param_$_0", "0");
			pBT->AddPar("AgentNodeTest", "float", "_$local_task_param_$_1", "0");
			// children
			{
				Task_bt_node_test_reference_sub_0_node7* node7 = BEHAVIAC_NEW Task_bt_node_test_reference_sub_0_node7;
				node7->SetClassNameString("Task");
				node7->SetId(7);
#if !BEHAVIAC_RELEASE
				node7->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node7);
				{
					Sequence* node0 = BEHAVIAC_NEW Sequence;
					node0->SetClassNameString("Sequence");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("AgentNodeTest");
#endif
					node7->AddChild(node0);
					{
						Assignment_bt_node_test_reference_sub_0_node1* node1 = BEHAVIAC_NEW Assignment_bt_node_test_reference_sub_0_node1;
						node1->SetClassNameString("Assignment");
						node1->SetId(1);
#if !BEHAVIAC_RELEASE
						node1->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node1);
						node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
					}
					{
						Assignment_bt_node_test_reference_sub_0_node2* node2 = BEHAVIAC_NEW Assignment_bt_node_test_reference_sub_0_node2;
						node2->SetClassNameString("Assignment");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node2);
						node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
					}
					node7->SetHasEvents(node7->HasEvents() | node0->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node7->HasEvents());
			}
			return true;
		}

	// Source file: node_test/reference_sub_1

		bool bt_node_test_reference_sub_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/reference_sub_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// pars
			pBT->AddPar("AgentNodeTest", "int", "_$local_task_param_$_0", "0");
			pBT->AddPar("AgentNodeTest", "float", "_$local_task_param_$_1", "0");
			// children
			{
				False* node0 = BEHAVIAC_NEW False;
				node0->SetClassNameString("False");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/reference_ut_0

	class ReferencedBehavior_bt_node_test_reference_ut_0_node1 : public ReferencedBehavior
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(ReferencedBehavior_bt_node_test_reference_ut_0_node1, ReferencedBehavior);
		ReferencedBehavior_bt_node_test_reference_ut_0_node1()
		{
			const char* szTreePath = this->GetReferencedTree(0);
			if (szTreePath) {
			BehaviorTree* behaviorTree = Workspace::GetInstance()->LoadBehaviorTree(szTreePath);
			BEHAVIAC_ASSERT(behaviorTree);
			if (behaviorTree)
			{
				this->m_bHasEvents |= behaviorTree->HasEvents();
			}
			}
			m_taskMethod = (CTaskMethod*)Action::LoadMethod("Self.AgentNodeTest::task_test(1,1)");
			BEHAVIAC_ASSERT(m_taskMethod);
		}
	protected:
		virtual const char* GetReferencedTree(const Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return (char*)("node_test/reference_sub_0");
		}
	};

		bool bt_node_test_reference_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/reference_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				ReferencedBehavior_bt_node_test_reference_ut_0_node1* node1 = BEHAVIAC_NEW ReferencedBehavior_bt_node_test_reference_ut_0_node1;
				node1->SetClassNameString("ReferencedBehavior");
				node1->SetId(1);
#if !BEHAVIAC_RELEASE
				node1->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node1);
				pBT->SetHasEvents(pBT->HasEvents() | node1->HasEvents());
			}
			return true;
		}

	// Source file: node_test/reference_ut_1

	class Assignment_bt_node_test_reference_ut_1_node2 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_reference_ut_1_node2, Assignment);
		Assignment_bt_node_test_reference_ut_1_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			behaviac::string opr = (char*)("node_test/reference_sub_0");
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("subTreePath") == 526556242u);
			pAgent->SetVariable("subTreePath", opr, 526556242u);
			return result;
		}
	};

	class ReferencedBehavior_bt_node_test_reference_ut_1_node1 : public ReferencedBehavior
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(ReferencedBehavior_bt_node_test_reference_ut_1_node1, ReferencedBehavior);
		ReferencedBehavior_bt_node_test_reference_ut_1_node1()
		{
			const char* szTreePath = this->GetReferencedTree(0);
			if (szTreePath) {
			BehaviorTree* behaviorTree = Workspace::GetInstance()->LoadBehaviorTree(szTreePath);
			BEHAVIAC_ASSERT(behaviorTree);
			if (behaviorTree)
			{
				this->m_bHasEvents |= behaviorTree->HasEvents();
			}
			}
		}
	protected:
		virtual const char* GetReferencedTree(const Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			if (pAgent) {
			return (char*)((behaviac::string&)pAgent->GetVariable<behaviac::string>(526556242u)).c_str();
			}
			return 0;
		}
	};

		bool bt_node_test_reference_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/reference_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// pars
			pBT->AddPar("AgentNodeTest", "string", "subTreePath", "");
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
					Assignment_bt_node_test_reference_ut_1_node2* node2 = BEHAVIAC_NEW Assignment_bt_node_test_reference_ut_1_node2;
					node2->SetClassNameString("Assignment");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					ReferencedBehavior_bt_node_test_reference_ut_1_node1* node1 = BEHAVIAC_NEW ReferencedBehavior_bt_node_test_reference_ut_1_node1;
					node1->SetClassNameString("ReferencedBehavior");
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

	// Source file: node_test/reference_ut_2

	class ReferencedBehavior_bt_node_test_reference_ut_2_node1 : public ReferencedBehavior
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(ReferencedBehavior_bt_node_test_reference_ut_2_node1, ReferencedBehavior);
		ReferencedBehavior_bt_node_test_reference_ut_2_node1()
		{
			const char* szTreePath = this->GetReferencedTree(0);
			if (szTreePath) {
			BehaviorTree* behaviorTree = Workspace::GetInstance()->LoadBehaviorTree(szTreePath);
			BEHAVIAC_ASSERT(behaviorTree);
			if (behaviorTree)
			{
				this->m_bHasEvents |= behaviorTree->HasEvents();
			}
			}
		}
	protected:
		virtual const char* GetReferencedTree(const Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			if (pAgent) {
			return ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_GetRefTree, const char* >();
			}
			return 0;
		}
	};

		bool bt_node_test_reference_ut_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/reference_ut_2");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				ReferencedBehavior_bt_node_test_reference_ut_2_node1* node1 = BEHAVIAC_NEW ReferencedBehavior_bt_node_test_reference_ut_2_node1;
				node1->SetClassNameString("ReferencedBehavior");
				node1->SetId(1);
#if !BEHAVIAC_RELEASE
				node1->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node1);
				pBT->SetHasEvents(pBT->HasEvents() | node1->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_loop_ut_0

	class Action_bt_node_test_selector_loop_ut_0_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_0_node5, Action);
		Action_bt_node_test_selector_loop_ut_0_node5()
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

	class Action_bt_node_test_selector_loop_ut_0_node6 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_0_node6, Action);
		Action_bt_node_test_selector_loop_ut_0_node6()
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

		bool bt_node_test_selector_loop_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_loop_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				SelectorLoop* node0 = BEHAVIAC_NEW SelectorLoop;
				node0->SetClassNameString("SelectorLoop");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					WithPrecondition* node1 = BEHAVIAC_NEW WithPrecondition;
					node1->SetClassNameString("WithPrecondition");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					{
						True* node4 = BEHAVIAC_NEW True;
						node4->SetClassNameString("True");
						node4->SetId(4);
#if !BEHAVIAC_RELEASE
						node4->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node4);
						node1->SetHasEvents(node1->HasEvents() | node4->HasEvents());
					}
					{
						Action_bt_node_test_selector_loop_ut_0_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_0_node5;
						node5->SetClassNameString("Action");
						node5->SetId(5);
#if !BEHAVIAC_RELEASE
						node5->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node5);
						node1->SetHasEvents(node1->HasEvents() | node5->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					WithPrecondition* node2 = BEHAVIAC_NEW WithPrecondition;
					node2->SetClassNameString("WithPrecondition");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					{
						True* node3 = BEHAVIAC_NEW True;
						node3->SetClassNameString("True");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node2->AddChild(node3);
						node2->SetHasEvents(node2->HasEvents() | node3->HasEvents());
					}
					{
						Action_bt_node_test_selector_loop_ut_0_node6* node6 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_0_node6;
						node6->SetClassNameString("Action");
						node6->SetId(6);
#if !BEHAVIAC_RELEASE
						node6->SetAgentType("AgentNodeTest");
#endif
						node2->AddChild(node6);
						node2->SetHasEvents(node2->HasEvents() | node6->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_loop_ut_1

	class Action_bt_node_test_selector_loop_ut_1_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_1_node5, Action);
		Action_bt_node_test_selector_loop_ut_1_node5()
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

	class Action_bt_node_test_selector_loop_ut_1_node6 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_1_node6, Action);
		Action_bt_node_test_selector_loop_ut_1_node6()
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

		bool bt_node_test_selector_loop_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_loop_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				SelectorLoop* node0 = BEHAVIAC_NEW SelectorLoop;
				node0->SetClassNameString("SelectorLoop");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					WithPrecondition* node1 = BEHAVIAC_NEW WithPrecondition;
					node1->SetClassNameString("WithPrecondition");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					{
						True* node4 = BEHAVIAC_NEW True;
						node4->SetClassNameString("True");
						node4->SetId(4);
#if !BEHAVIAC_RELEASE
						node4->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node4);
						node1->SetHasEvents(node1->HasEvents() | node4->HasEvents());
					}
					{
						Action_bt_node_test_selector_loop_ut_1_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_1_node5;
						node5->SetClassNameString("Action");
						node5->SetId(5);
#if !BEHAVIAC_RELEASE
						node5->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node5);
						node1->SetHasEvents(node1->HasEvents() | node5->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					WithPrecondition* node2 = BEHAVIAC_NEW WithPrecondition;
					node2->SetClassNameString("WithPrecondition");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					{
						True* node3 = BEHAVIAC_NEW True;
						node3->SetClassNameString("True");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node2->AddChild(node3);
						node2->SetHasEvents(node2->HasEvents() | node3->HasEvents());
					}
					{
						Action_bt_node_test_selector_loop_ut_1_node6* node6 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_1_node6;
						node6->SetClassNameString("Action");
						node6->SetId(6);
#if !BEHAVIAC_RELEASE
						node6->SetAgentType("AgentNodeTest");
#endif
						node2->AddChild(node6);
						node2->SetHasEvents(node2->HasEvents() | node6->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_loop_ut_2

	class Action_bt_node_test_selector_loop_ut_2_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_2_node5, Action);
		Action_bt_node_test_selector_loop_ut_2_node5()
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

	class Action_bt_node_test_selector_loop_ut_2_node6 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_2_node6, Action);
		Action_bt_node_test_selector_loop_ut_2_node6()
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

		bool bt_node_test_selector_loop_ut_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_loop_ut_2");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				SelectorLoop* node0 = BEHAVIAC_NEW SelectorLoop;
				node0->SetClassNameString("SelectorLoop");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					WithPrecondition* node1 = BEHAVIAC_NEW WithPrecondition;
					node1->SetClassNameString("WithPrecondition");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					{
						True* node4 = BEHAVIAC_NEW True;
						node4->SetClassNameString("True");
						node4->SetId(4);
#if !BEHAVIAC_RELEASE
						node4->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node4);
						node1->SetHasEvents(node1->HasEvents() | node4->HasEvents());
					}
					{
						Action_bt_node_test_selector_loop_ut_2_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_2_node5;
						node5->SetClassNameString("Action");
						node5->SetId(5);
#if !BEHAVIAC_RELEASE
						node5->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node5);
						node1->SetHasEvents(node1->HasEvents() | node5->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					WithPrecondition* node2 = BEHAVIAC_NEW WithPrecondition;
					node2->SetClassNameString("WithPrecondition");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					{
						False* node3 = BEHAVIAC_NEW False;
						node3->SetClassNameString("False");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node2->AddChild(node3);
						node2->SetHasEvents(node2->HasEvents() | node3->HasEvents());
					}
					{
						Action_bt_node_test_selector_loop_ut_2_node6* node6 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_2_node6;
						node6->SetClassNameString("Action");
						node6->SetId(6);
#if !BEHAVIAC_RELEASE
						node6->SetAgentType("AgentNodeTest");
#endif
						node2->AddChild(node6);
						node2->SetHasEvents(node2->HasEvents() | node6->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

}
