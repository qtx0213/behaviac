#include "generated_behaviors_7.h"

namespace behaviac
{
	// Source file: node_test/selector_loop_ut_3

	class Action_bt_node_test_selector_loop_ut_3_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_3_node5, Action);
		Action_bt_node_test_selector_loop_ut_3_node5()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_RUNNING;
		}
		int method_p0;
	};

	class Action_bt_node_test_selector_loop_ut_3_node6 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_3_node6, Action);
		Action_bt_node_test_selector_loop_ut_3_node6()
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

		bool bt_node_test_selector_loop_ut_3::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_loop_ut_3");
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
						False* node4 = BEHAVIAC_NEW False;
						node4->SetClassNameString("False");
						node4->SetId(4);
#if !BEHAVIAC_RELEASE
						node4->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node4);
						node1->SetHasEvents(node1->HasEvents() | node4->HasEvents());
					}
					{
						Action_bt_node_test_selector_loop_ut_3_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_3_node5;
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
						Action_bt_node_test_selector_loop_ut_3_node6* node6 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_3_node6;
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

	// Source file: node_test/selector_loop_ut_4

	class Action_bt_node_test_selector_loop_ut_4_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_4_node5, Action);
		Action_bt_node_test_selector_loop_ut_4_node5()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_1, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

	class Action_bt_node_test_selector_loop_ut_4_node6 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_4_node6, Action);
		Action_bt_node_test_selector_loop_ut_4_node6()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_RUNNING;
		}
		int method_p0;
	};

		bool bt_node_test_selector_loop_ut_4::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_loop_ut_4");
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
						Action_bt_node_test_selector_loop_ut_4_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_4_node5;
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
						Action_bt_node_test_selector_loop_ut_4_node6* node6 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_4_node6;
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

	// Source file: node_test/selector_loop_ut_5

	class Action_bt_node_test_selector_loop_ut_5_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_5_node5, Action);
		Action_bt_node_test_selector_loop_ut_5_node5()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_RUNNING;
		}
		int method_p0;
	};

	class Action_bt_node_test_selector_loop_ut_5_node6 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_5_node6, Action);
		Action_bt_node_test_selector_loop_ut_5_node6()
		{
			method_p0 = (char*)("node_test/reference_sub_1");
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::EBTStatus result = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_switchRef, behaviac::EBTStatus, behaviac::string& >(method_p0);
			return result;
		}
		behaviac::string method_p0;
	};

	class Action_bt_node_test_selector_loop_ut_5_node9 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_5_node9, Action);
		Action_bt_node_test_selector_loop_ut_5_node9()
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

		bool bt_node_test_selector_loop_ut_5::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_loop_ut_5");
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
						False* node4 = BEHAVIAC_NEW False;
						node4->SetClassNameString("False");
						node4->SetId(4);
#if !BEHAVIAC_RELEASE
						node4->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node4);
						node1->SetHasEvents(node1->HasEvents() | node4->HasEvents());
					}
					{
						Action_bt_node_test_selector_loop_ut_5_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_5_node5;
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
						Action_bt_node_test_selector_loop_ut_5_node6* node6 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_5_node6;
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
				{
					WithPrecondition* node7 = BEHAVIAC_NEW WithPrecondition;
					node7->SetClassNameString("WithPrecondition");
					node7->SetId(7);
#if !BEHAVIAC_RELEASE
					node7->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node7);
					{
						True* node8 = BEHAVIAC_NEW True;
						node8->SetClassNameString("True");
						node8->SetId(8);
#if !BEHAVIAC_RELEASE
						node8->SetAgentType("AgentNodeTest");
#endif
						node7->AddChild(node8);
						node7->SetHasEvents(node7->HasEvents() | node8->HasEvents());
					}
					{
						Action_bt_node_test_selector_loop_ut_5_node9* node9 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_5_node9;
						node9->SetClassNameString("Action");
						node9->SetId(9);
#if !BEHAVIAC_RELEASE
						node9->SetAgentType("AgentNodeTest");
#endif
						node7->AddChild(node9);
						node7->SetHasEvents(node7->HasEvents() | node9->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node7->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_loop_ut_6

	class DecoratorLoop_bt_node_test_selector_loop_ut_6_node9 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_node_test_selector_loop_ut_6_node9, DecoratorLoop);
		DecoratorLoop_bt_node_test_selector_loop_ut_6_node9()
		{
			m_bDecorateWhenChildEnds = false;
			m_bDoneWithinFrame = false;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 10;
		}
	};

	class Condition_bt_node_test_selector_loop_ut_6_node4 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_selector_loop_ut_6_node4, Condition);
		Condition_bt_node_test_selector_loop_ut_6_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			bool opl = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_CanSeeEnemy, bool >();
			bool opr = true;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_selector_loop_ut_6_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_6_node5, Action);
		Action_bt_node_test_selector_loop_ut_6_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::EBTStatus result = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_Move, behaviac::EBTStatus >();
			return result;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_6_attach7 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_6_attach7, Precondition);
		Precondition_bt_node_test_selector_loop_ut_6_attach7()
		{
			this->SetPhase(Precondition::E_UPDATE);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr2;
			return result;
		}
	};

	class Action_bt_node_test_selector_loop_ut_6_node6 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_6_node6, Action);
		Action_bt_node_test_selector_loop_ut_6_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::EBTStatus result = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_MoveToTarget, behaviac::EBTStatus >();
			return result;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_6_attach8 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_6_attach8, Precondition);
		Precondition_bt_node_test_selector_loop_ut_6_attach8()
		{
			this->SetPhase(Precondition::E_UPDATE);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr2 = 2;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr2;
			return result;
		}
	};

		bool bt_node_test_selector_loop_ut_6::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_loop_ut_6");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				DecoratorLoop_bt_node_test_selector_loop_ut_6_node9* node9 = BEHAVIAC_NEW DecoratorLoop_bt_node_test_selector_loop_ut_6_node9;
				node9->SetClassNameString("DecoratorLoop");
				node9->SetId(9);
#if !BEHAVIAC_RELEASE
				node9->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node9);
				{
					SelectorLoop* node0 = BEHAVIAC_NEW SelectorLoop;
					node0->SetClassNameString("SelectorLoop");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("AgentNodeTest");
#endif
					node9->AddChild(node0);
					{
						WithPrecondition* node1 = BEHAVIAC_NEW WithPrecondition;
						node1->SetClassNameString("WithPrecondition");
						node1->SetId(1);
#if !BEHAVIAC_RELEASE
						node1->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node1);
						{
							Condition_bt_node_test_selector_loop_ut_6_node4* node4 = BEHAVIAC_NEW Condition_bt_node_test_selector_loop_ut_6_node4;
							node4->SetClassNameString("Condition");
							node4->SetId(4);
#if !BEHAVIAC_RELEASE
							node4->SetAgentType("AgentNodeTest");
#endif
							node1->AddChild(node4);
							node1->SetHasEvents(node1->HasEvents() | node4->HasEvents());
						}
						{
							Action_bt_node_test_selector_loop_ut_6_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_6_node5;
							node5->SetClassNameString("Action");
							node5->SetId(5);
#if !BEHAVIAC_RELEASE
							node5->SetAgentType("AgentNodeTest");
#endif
							// attachments
							{
								Precondition_bt_node_test_selector_loop_ut_6_attach7* attach7 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_6_attach7;
								attach7->SetClassNameString("Precondition");
								attach7->SetId(7);
#if !BEHAVIAC_RELEASE
								attach7->SetAgentType("AgentNodeTest");
#endif
								node5->Attach(attach7, true, false, false);
								node5->SetHasEvents(node5->HasEvents() | (Event::DynamicCast(attach7) != 0));
							}
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
							Action_bt_node_test_selector_loop_ut_6_node6* node6 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_6_node6;
							node6->SetClassNameString("Action");
							node6->SetId(6);
#if !BEHAVIAC_RELEASE
							node6->SetAgentType("AgentNodeTest");
#endif
							// attachments
							{
								Precondition_bt_node_test_selector_loop_ut_6_attach8* attach8 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_6_attach8;
								attach8->SetClassNameString("Precondition");
								attach8->SetId(8);
#if !BEHAVIAC_RELEASE
								attach8->SetAgentType("AgentNodeTest");
#endif
								node6->Attach(attach8, true, false, false);
								node6->SetHasEvents(node6->HasEvents() | (Event::DynamicCast(attach8) != 0));
							}
							node2->AddChild(node6);
							node2->SetHasEvents(node2->HasEvents() | node6->HasEvents());
						}
						node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
					}
					node9->SetHasEvents(node9->HasEvents() | node0->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node9->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_loop_ut_7

	class Action_bt_node_test_selector_loop_ut_7_node16 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_7_node16, Action);
		Action_bt_node_test_selector_loop_ut_7_node16()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_SelectTarget, void >();
			return BT_SUCCESS;
		}
	};

	class Assignment_bt_node_test_selector_loop_ut_7_node21 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_selector_loop_ut_7_node21, Assignment);
		Assignment_bt_node_test_selector_loop_ut_7_node21()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 0;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = opr;
			return result;
		}
	};

	class DecoratorLoop_bt_node_test_selector_loop_ut_7_node9 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_node_test_selector_loop_ut_7_node9, DecoratorLoop);
		DecoratorLoop_bt_node_test_selector_loop_ut_7_node9()
		{
			m_bDecorateWhenChildEnds = false;
			m_bDoneWithinFrame = false;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return -1;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_7_attach14 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_7_attach14, Precondition);
		Precondition_bt_node_test_selector_loop_ut_7_attach14()
		{
			this->SetPhase(Precondition::E_BOTH);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			bool opl = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_IsTargetValid, bool >();
			bool opr2 = true;
			bool op = Details::Equal(opl, opr2);
			if (!op)
				result = BT_FAILURE;
			return result;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_7_attach17 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_7_attach17, Precondition);
		Precondition_bt_node_test_selector_loop_ut_7_attach17()
		{
			this->SetPhase(Precondition::E_UPDATE);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Effector_bt_node_test_selector_loop_ut_7_attach18 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_selector_loop_ut_7_attach18, Effector);
		Effector_bt_node_test_selector_loop_ut_7_attach18()
		{
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr2 = 0;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = opr2;
			return result;
		}
	};

	class Condition_bt_node_test_selector_loop_ut_7_node4 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_selector_loop_ut_7_node4, Condition);
		Condition_bt_node_test_selector_loop_ut_7_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			bool opl = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_CanSeeEnemy, bool >();
			bool opr = true;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_selector_loop_ut_7_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_7_node5, Action);
		Action_bt_node_test_selector_loop_ut_7_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::EBTStatus result = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_Move, behaviac::EBTStatus >();
			return result;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_7_attach7 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_7_attach7, Precondition);
		Precondition_bt_node_test_selector_loop_ut_7_attach7()
		{
			this->SetPhase(Precondition::E_UPDATE);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr2;
			return result;
		}
	};

	class Action_bt_node_test_selector_loop_ut_7_node6 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_7_node6, Action);
		Action_bt_node_test_selector_loop_ut_7_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::EBTStatus result = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_MoveToTarget, behaviac::EBTStatus >();
			return result;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_7_attach8 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_7_attach8, Precondition);
		Precondition_bt_node_test_selector_loop_ut_7_attach8()
		{
			this->SetPhase(Precondition::E_UPDATE);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr2 = 2;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr2;
			return result;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_7_attach19 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_7_attach19, Precondition);
		Precondition_bt_node_test_selector_loop_ut_7_attach19()
		{
			this->SetPhase(Precondition::E_ENTER);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = opr2;
			return result;
		}
	};

	class Action_bt_node_test_selector_loop_ut_7_node12 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_7_node12, Action);
		Action_bt_node_test_selector_loop_ut_7_node12()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_Stop, void >();
			return BT_SUCCESS;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_7_attach20 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_7_attach20, Precondition);
		Precondition_bt_node_test_selector_loop_ut_7_attach20()
		{
			this->SetPhase(Precondition::E_ENTER);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Action_bt_node_test_selector_loop_ut_7_node13 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_7_node13, Action);
		Action_bt_node_test_selector_loop_ut_7_node13()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_SelectTarget, void >();
			return BT_SUCCESS;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_7_attach22 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_7_attach22, Precondition);
		Precondition_bt_node_test_selector_loop_ut_7_attach22()
		{
			this->SetPhase(Precondition::E_ENTER);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

		bool bt_node_test_selector_loop_ut_7::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_loop_ut_7");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node15 = BEHAVIAC_NEW Sequence;
				node15->SetClassNameString("Sequence");
				node15->SetId(15);
#if !BEHAVIAC_RELEASE
				node15->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node15);
				{
					Action_bt_node_test_selector_loop_ut_7_node16* node16 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_7_node16;
					node16->SetClassNameString("Action");
					node16->SetId(16);
#if !BEHAVIAC_RELEASE
					node16->SetAgentType("AgentNodeTest");
#endif
					node15->AddChild(node16);
					node15->SetHasEvents(node15->HasEvents() | node16->HasEvents());
				}
				{
					Assignment_bt_node_test_selector_loop_ut_7_node21* node21 = BEHAVIAC_NEW Assignment_bt_node_test_selector_loop_ut_7_node21;
					node21->SetClassNameString("Assignment");
					node21->SetId(21);
#if !BEHAVIAC_RELEASE
					node21->SetAgentType("AgentNodeTest");
#endif
					node15->AddChild(node21);
					node15->SetHasEvents(node15->HasEvents() | node21->HasEvents());
				}
				{
					Selector* node10 = BEHAVIAC_NEW Selector;
					node10->SetClassNameString("Selector");
					node10->SetId(10);
#if !BEHAVIAC_RELEASE
					node10->SetAgentType("AgentNodeTest");
#endif
					node15->AddChild(node10);
					{
						DecoratorLoop_bt_node_test_selector_loop_ut_7_node9* node9 = BEHAVIAC_NEW DecoratorLoop_bt_node_test_selector_loop_ut_7_node9;
						node9->SetClassNameString("DecoratorLoop");
						node9->SetId(9);
#if !BEHAVIAC_RELEASE
						node9->SetAgentType("AgentNodeTest");
#endif
						// attachments
						{
							Precondition_bt_node_test_selector_loop_ut_7_attach14* attach14 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_7_attach14;
							attach14->SetClassNameString("Precondition");
							attach14->SetId(14);
#if !BEHAVIAC_RELEASE
							attach14->SetAgentType("AgentNodeTest");
#endif
							node9->Attach(attach14, true, false, false);
							node9->SetHasEvents(node9->HasEvents() | (Event::DynamicCast(attach14) != 0));
						}
						{
							Precondition_bt_node_test_selector_loop_ut_7_attach17* attach17 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_7_attach17;
							attach17->SetClassNameString("Precondition");
							attach17->SetId(17);
#if !BEHAVIAC_RELEASE
							attach17->SetAgentType("AgentNodeTest");
#endif
							node9->Attach(attach17, true, false, false);
							node9->SetHasEvents(node9->HasEvents() | (Event::DynamicCast(attach17) != 0));
						}
						{
							Effector_bt_node_test_selector_loop_ut_7_attach18* attach18 = BEHAVIAC_NEW Effector_bt_node_test_selector_loop_ut_7_attach18;
							attach18->SetClassNameString("Effector");
							attach18->SetId(18);
#if !BEHAVIAC_RELEASE
							attach18->SetAgentType("AgentNodeTest");
#endif
							node9->Attach(attach18, false, true, false);
							node9->SetHasEvents(node9->HasEvents() | (Event::DynamicCast(attach18) != 0));
						}
						node10->AddChild(node9);
						{
							SelectorLoop* node0 = BEHAVIAC_NEW SelectorLoop;
							node0->SetClassNameString("SelectorLoop");
							node0->SetId(0);
#if !BEHAVIAC_RELEASE
							node0->SetAgentType("AgentNodeTest");
#endif
							node9->AddChild(node0);
							{
								WithPrecondition* node1 = BEHAVIAC_NEW WithPrecondition;
								node1->SetClassNameString("WithPrecondition");
								node1->SetId(1);
#if !BEHAVIAC_RELEASE
								node1->SetAgentType("AgentNodeTest");
#endif
								node0->AddChild(node1);
								{
									Condition_bt_node_test_selector_loop_ut_7_node4* node4 = BEHAVIAC_NEW Condition_bt_node_test_selector_loop_ut_7_node4;
									node4->SetClassNameString("Condition");
									node4->SetId(4);
#if !BEHAVIAC_RELEASE
									node4->SetAgentType("AgentNodeTest");
#endif
									node1->AddChild(node4);
									node1->SetHasEvents(node1->HasEvents() | node4->HasEvents());
								}
								{
									Action_bt_node_test_selector_loop_ut_7_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_7_node5;
									node5->SetClassNameString("Action");
									node5->SetId(5);
#if !BEHAVIAC_RELEASE
									node5->SetAgentType("AgentNodeTest");
#endif
									// attachments
									{
										Precondition_bt_node_test_selector_loop_ut_7_attach7* attach7 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_7_attach7;
										attach7->SetClassNameString("Precondition");
										attach7->SetId(7);
#if !BEHAVIAC_RELEASE
										attach7->SetAgentType("AgentNodeTest");
#endif
										node5->Attach(attach7, true, false, false);
										node5->SetHasEvents(node5->HasEvents() | (Event::DynamicCast(attach7) != 0));
									}
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
									Action_bt_node_test_selector_loop_ut_7_node6* node6 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_7_node6;
									node6->SetClassNameString("Action");
									node6->SetId(6);
#if !BEHAVIAC_RELEASE
									node6->SetAgentType("AgentNodeTest");
#endif
									// attachments
									{
										Precondition_bt_node_test_selector_loop_ut_7_attach8* attach8 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_7_attach8;
										attach8->SetClassNameString("Precondition");
										attach8->SetId(8);
#if !BEHAVIAC_RELEASE
										attach8->SetAgentType("AgentNodeTest");
#endif
										node6->Attach(attach8, true, false, false);
										node6->SetHasEvents(node6->HasEvents() | (Event::DynamicCast(attach8) != 0));
									}
									node2->AddChild(node6);
									node2->SetHasEvents(node2->HasEvents() | node6->HasEvents());
								}
								node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
							}
							node9->SetHasEvents(node9->HasEvents() | node0->HasEvents());
						}
						node10->SetHasEvents(node10->HasEvents() | node9->HasEvents());
					}
					{
						Sequence* node11 = BEHAVIAC_NEW Sequence;
						node11->SetClassNameString("Sequence");
						node11->SetId(11);
#if !BEHAVIAC_RELEASE
						node11->SetAgentType("AgentNodeTest");
#endif
						// attachments
						{
							Precondition_bt_node_test_selector_loop_ut_7_attach19* attach19 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_7_attach19;
							attach19->SetClassNameString("Precondition");
							attach19->SetId(19);
#if !BEHAVIAC_RELEASE
							attach19->SetAgentType("AgentNodeTest");
#endif
							node11->Attach(attach19, true, false, false);
							node11->SetHasEvents(node11->HasEvents() | (Event::DynamicCast(attach19) != 0));
						}
						node10->AddChild(node11);
						{
							Action_bt_node_test_selector_loop_ut_7_node12* node12 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_7_node12;
							node12->SetClassNameString("Action");
							node12->SetId(12);
#if !BEHAVIAC_RELEASE
							node12->SetAgentType("AgentNodeTest");
#endif
							// attachments
							{
								Precondition_bt_node_test_selector_loop_ut_7_attach20* attach20 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_7_attach20;
								attach20->SetClassNameString("Precondition");
								attach20->SetId(20);
#if !BEHAVIAC_RELEASE
								attach20->SetAgentType("AgentNodeTest");
#endif
								node12->Attach(attach20, true, false, false);
								node12->SetHasEvents(node12->HasEvents() | (Event::DynamicCast(attach20) != 0));
							}
							node11->AddChild(node12);
							node11->SetHasEvents(node11->HasEvents() | node12->HasEvents());
						}
						{
							Action_bt_node_test_selector_loop_ut_7_node13* node13 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_7_node13;
							node13->SetClassNameString("Action");
							node13->SetId(13);
#if !BEHAVIAC_RELEASE
							node13->SetAgentType("AgentNodeTest");
#endif
							// attachments
							{
								Precondition_bt_node_test_selector_loop_ut_7_attach22* attach22 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_7_attach22;
								attach22->SetClassNameString("Precondition");
								attach22->SetId(22);
#if !BEHAVIAC_RELEASE
								attach22->SetAgentType("AgentNodeTest");
#endif
								node13->Attach(attach22, true, false, false);
								node13->SetHasEvents(node13->HasEvents() | (Event::DynamicCast(attach22) != 0));
							}
							node11->AddChild(node13);
							node11->SetHasEvents(node11->HasEvents() | node13->HasEvents());
						}
						node10->SetHasEvents(node10->HasEvents() | node11->HasEvents());
					}
					node15->SetHasEvents(node15->HasEvents() | node10->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node15->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_loop_ut_8

	class Action_bt_node_test_selector_loop_ut_8_node16 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_8_node16, Action);
		Action_bt_node_test_selector_loop_ut_8_node16()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_SelectTarget, void >();
			return BT_SUCCESS;
		}
	};

	class Assignment_bt_node_test_selector_loop_ut_8_node21 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_selector_loop_ut_8_node21, Assignment);
		Assignment_bt_node_test_selector_loop_ut_8_node21()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 0;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = opr;
			return result;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_8_attach24 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_8_attach24, Precondition);
		Precondition_bt_node_test_selector_loop_ut_8_attach24()
		{
			this->SetPhase(Precondition::E_BOTH);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr2 = 10;
			bool op = Details::GreaterEqual(opl, opr2);
			if (!op)
				result = BT_FAILURE;
			return result;
		}
	};

	class DecoratorLoop_bt_node_test_selector_loop_ut_8_node9 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_node_test_selector_loop_ut_8_node9, DecoratorLoop);
		DecoratorLoop_bt_node_test_selector_loop_ut_8_node9()
		{
			m_bDecorateWhenChildEnds = false;
			m_bDoneWithinFrame = false;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return -1;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_8_attach14 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_8_attach14, Precondition);
		Precondition_bt_node_test_selector_loop_ut_8_attach14()
		{
			this->SetPhase(Precondition::E_BOTH);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			bool opl = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_IsTargetValid, bool >();
			bool opr2 = true;
			bool op = Details::Equal(opl, opr2);
			if (!op)
				result = BT_FAILURE;
			return result;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_8_attach17 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_8_attach17, Precondition);
		Precondition_bt_node_test_selector_loop_ut_8_attach17()
		{
			this->SetPhase(Precondition::E_UPDATE);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Effector_bt_node_test_selector_loop_ut_8_attach18 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_selector_loop_ut_8_attach18, Effector);
		Effector_bt_node_test_selector_loop_ut_8_attach18()
		{
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr2 = 0;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = opr2;
			return result;
		}
	};

	class Condition_bt_node_test_selector_loop_ut_8_node4 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_selector_loop_ut_8_node4, Condition);
		Condition_bt_node_test_selector_loop_ut_8_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			bool opl = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_CanSeeEnemy, bool >();
			bool opr = true;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_selector_loop_ut_8_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_8_node5, Action);
		Action_bt_node_test_selector_loop_ut_8_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::EBTStatus result = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_Move, behaviac::EBTStatus >();
			return result;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_8_attach7 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_8_attach7, Precondition);
		Precondition_bt_node_test_selector_loop_ut_8_attach7()
		{
			this->SetPhase(Precondition::E_UPDATE);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr2;
			return result;
		}
	};

	class Action_bt_node_test_selector_loop_ut_8_node6 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_8_node6, Action);
		Action_bt_node_test_selector_loop_ut_8_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			behaviac::EBTStatus result = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_MoveToTarget, behaviac::EBTStatus >();
			return result;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_8_attach8 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_8_attach8, Precondition);
		Precondition_bt_node_test_selector_loop_ut_8_attach8()
		{
			this->SetPhase(Precondition::E_UPDATE);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr2 = 2;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr2;
			return result;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_8_attach19 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_8_attach19, Precondition);
		Precondition_bt_node_test_selector_loop_ut_8_attach19()
		{
			this->SetPhase(Precondition::E_ENTER);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = opr2;
			return result;
		}
	};

	class Action_bt_node_test_selector_loop_ut_8_node12 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_8_node12, Action);
		Action_bt_node_test_selector_loop_ut_8_node12()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_Stop, void >();
			return BT_SUCCESS;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_8_attach20 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_8_attach20, Precondition);
		Precondition_bt_node_test_selector_loop_ut_8_attach20()
		{
			this->SetPhase(Precondition::E_ENTER);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Action_bt_node_test_selector_loop_ut_8_node13 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_loop_ut_8_node13, Action);
		Action_bt_node_test_selector_loop_ut_8_node13()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_SelectTarget, void >();
			return BT_SUCCESS;
		}
	};

	class Precondition_bt_node_test_selector_loop_ut_8_attach22 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_selector_loop_ut_8_attach22, Precondition);
		Precondition_bt_node_test_selector_loop_ut_8_attach22()
		{
			this->SetPhase(Precondition::E_ENTER);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Assignment_bt_node_test_selector_loop_ut_8_node25 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_selector_loop_ut_8_node25, Assignment);
		Assignment_bt_node_test_selector_loop_ut_8_node25()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 100;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = opr;
			return result;
		}
	};

	class Compute_bt_node_test_selector_loop_ut_8_node26 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_selector_loop_ut_8_node26, Compute);
		Compute_bt_node_test_selector_loop_ut_8_node26()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

		bool bt_node_test_selector_loop_ut_8::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_loop_ut_8");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node15 = BEHAVIAC_NEW Sequence;
				node15->SetClassNameString("Sequence");
				node15->SetId(15);
#if !BEHAVIAC_RELEASE
				node15->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node15);
				{
					Action_bt_node_test_selector_loop_ut_8_node16* node16 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_8_node16;
					node16->SetClassNameString("Action");
					node16->SetId(16);
#if !BEHAVIAC_RELEASE
					node16->SetAgentType("AgentNodeTest");
#endif
					node15->AddChild(node16);
					node15->SetHasEvents(node15->HasEvents() | node16->HasEvents());
				}
				{
					Assignment_bt_node_test_selector_loop_ut_8_node21* node21 = BEHAVIAC_NEW Assignment_bt_node_test_selector_loop_ut_8_node21;
					node21->SetClassNameString("Assignment");
					node21->SetId(21);
#if !BEHAVIAC_RELEASE
					node21->SetAgentType("AgentNodeTest");
#endif
					node15->AddChild(node21);
					node15->SetHasEvents(node15->HasEvents() | node21->HasEvents());
				}
				{
					Selector* node23 = BEHAVIAC_NEW Selector;
					node23->SetClassNameString("Selector");
					node23->SetId(23);
#if !BEHAVIAC_RELEASE
					node23->SetAgentType("AgentNodeTest");
#endif
					node15->AddChild(node23);
					{
						Selector* node10 = BEHAVIAC_NEW Selector;
						node10->SetClassNameString("Selector");
						node10->SetId(10);
#if !BEHAVIAC_RELEASE
						node10->SetAgentType("AgentNodeTest");
#endif
						// attachments
						{
							Precondition_bt_node_test_selector_loop_ut_8_attach24* attach24 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_8_attach24;
							attach24->SetClassNameString("Precondition");
							attach24->SetId(24);
#if !BEHAVIAC_RELEASE
							attach24->SetAgentType("AgentNodeTest");
#endif
							node10->Attach(attach24, true, false, false);
							node10->SetHasEvents(node10->HasEvents() | (Event::DynamicCast(attach24) != 0));
						}
						node23->AddChild(node10);
						{
							DecoratorLoop_bt_node_test_selector_loop_ut_8_node9* node9 = BEHAVIAC_NEW DecoratorLoop_bt_node_test_selector_loop_ut_8_node9;
							node9->SetClassNameString("DecoratorLoop");
							node9->SetId(9);
#if !BEHAVIAC_RELEASE
							node9->SetAgentType("AgentNodeTest");
#endif
							// attachments
							{
								Precondition_bt_node_test_selector_loop_ut_8_attach14* attach14 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_8_attach14;
								attach14->SetClassNameString("Precondition");
								attach14->SetId(14);
#if !BEHAVIAC_RELEASE
								attach14->SetAgentType("AgentNodeTest");
#endif
								node9->Attach(attach14, true, false, false);
								node9->SetHasEvents(node9->HasEvents() | (Event::DynamicCast(attach14) != 0));
							}
							{
								Precondition_bt_node_test_selector_loop_ut_8_attach17* attach17 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_8_attach17;
								attach17->SetClassNameString("Precondition");
								attach17->SetId(17);
#if !BEHAVIAC_RELEASE
								attach17->SetAgentType("AgentNodeTest");
#endif
								node9->Attach(attach17, true, false, false);
								node9->SetHasEvents(node9->HasEvents() | (Event::DynamicCast(attach17) != 0));
							}
							{
								Effector_bt_node_test_selector_loop_ut_8_attach18* attach18 = BEHAVIAC_NEW Effector_bt_node_test_selector_loop_ut_8_attach18;
								attach18->SetClassNameString("Effector");
								attach18->SetId(18);
#if !BEHAVIAC_RELEASE
								attach18->SetAgentType("AgentNodeTest");
#endif
								node9->Attach(attach18, false, true, false);
								node9->SetHasEvents(node9->HasEvents() | (Event::DynamicCast(attach18) != 0));
							}
							node10->AddChild(node9);
							{
								SelectorLoop* node0 = BEHAVIAC_NEW SelectorLoop;
								node0->SetClassNameString("SelectorLoop");
								node0->SetId(0);
#if !BEHAVIAC_RELEASE
								node0->SetAgentType("AgentNodeTest");
#endif
								node9->AddChild(node0);
								{
									WithPrecondition* node1 = BEHAVIAC_NEW WithPrecondition;
									node1->SetClassNameString("WithPrecondition");
									node1->SetId(1);
#if !BEHAVIAC_RELEASE
									node1->SetAgentType("AgentNodeTest");
#endif
									node0->AddChild(node1);
									{
										Condition_bt_node_test_selector_loop_ut_8_node4* node4 = BEHAVIAC_NEW Condition_bt_node_test_selector_loop_ut_8_node4;
										node4->SetClassNameString("Condition");
										node4->SetId(4);
#if !BEHAVIAC_RELEASE
										node4->SetAgentType("AgentNodeTest");
#endif
										node1->AddChild(node4);
										node1->SetHasEvents(node1->HasEvents() | node4->HasEvents());
									}
									{
										Action_bt_node_test_selector_loop_ut_8_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_8_node5;
										node5->SetClassNameString("Action");
										node5->SetId(5);
#if !BEHAVIAC_RELEASE
										node5->SetAgentType("AgentNodeTest");
#endif
										// attachments
										{
											Precondition_bt_node_test_selector_loop_ut_8_attach7* attach7 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_8_attach7;
											attach7->SetClassNameString("Precondition");
											attach7->SetId(7);
#if !BEHAVIAC_RELEASE
											attach7->SetAgentType("AgentNodeTest");
#endif
											node5->Attach(attach7, true, false, false);
											node5->SetHasEvents(node5->HasEvents() | (Event::DynamicCast(attach7) != 0));
										}
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
										Action_bt_node_test_selector_loop_ut_8_node6* node6 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_8_node6;
										node6->SetClassNameString("Action");
										node6->SetId(6);
#if !BEHAVIAC_RELEASE
										node6->SetAgentType("AgentNodeTest");
#endif
										// attachments
										{
											Precondition_bt_node_test_selector_loop_ut_8_attach8* attach8 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_8_attach8;
											attach8->SetClassNameString("Precondition");
											attach8->SetId(8);
#if !BEHAVIAC_RELEASE
											attach8->SetAgentType("AgentNodeTest");
#endif
											node6->Attach(attach8, true, false, false);
											node6->SetHasEvents(node6->HasEvents() | (Event::DynamicCast(attach8) != 0));
										}
										node2->AddChild(node6);
										node2->SetHasEvents(node2->HasEvents() | node6->HasEvents());
									}
									node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
								}
								node9->SetHasEvents(node9->HasEvents() | node0->HasEvents());
							}
							node10->SetHasEvents(node10->HasEvents() | node9->HasEvents());
						}
						{
							Sequence* node11 = BEHAVIAC_NEW Sequence;
							node11->SetClassNameString("Sequence");
							node11->SetId(11);
#if !BEHAVIAC_RELEASE
							node11->SetAgentType("AgentNodeTest");
#endif
							// attachments
							{
								Precondition_bt_node_test_selector_loop_ut_8_attach19* attach19 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_8_attach19;
								attach19->SetClassNameString("Precondition");
								attach19->SetId(19);
#if !BEHAVIAC_RELEASE
								attach19->SetAgentType("AgentNodeTest");
#endif
								node11->Attach(attach19, true, false, false);
								node11->SetHasEvents(node11->HasEvents() | (Event::DynamicCast(attach19) != 0));
							}
							node10->AddChild(node11);
							{
								Action_bt_node_test_selector_loop_ut_8_node12* node12 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_8_node12;
								node12->SetClassNameString("Action");
								node12->SetId(12);
#if !BEHAVIAC_RELEASE
								node12->SetAgentType("AgentNodeTest");
#endif
								// attachments
								{
									Precondition_bt_node_test_selector_loop_ut_8_attach20* attach20 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_8_attach20;
									attach20->SetClassNameString("Precondition");
									attach20->SetId(20);
#if !BEHAVIAC_RELEASE
									attach20->SetAgentType("AgentNodeTest");
#endif
									node12->Attach(attach20, true, false, false);
									node12->SetHasEvents(node12->HasEvents() | (Event::DynamicCast(attach20) != 0));
								}
								node11->AddChild(node12);
								node11->SetHasEvents(node11->HasEvents() | node12->HasEvents());
							}
							{
								Action_bt_node_test_selector_loop_ut_8_node13* node13 = BEHAVIAC_NEW Action_bt_node_test_selector_loop_ut_8_node13;
								node13->SetClassNameString("Action");
								node13->SetId(13);
#if !BEHAVIAC_RELEASE
								node13->SetAgentType("AgentNodeTest");
#endif
								// attachments
								{
									Precondition_bt_node_test_selector_loop_ut_8_attach22* attach22 = BEHAVIAC_NEW Precondition_bt_node_test_selector_loop_ut_8_attach22;
									attach22->SetClassNameString("Precondition");
									attach22->SetId(22);
#if !BEHAVIAC_RELEASE
									attach22->SetAgentType("AgentNodeTest");
#endif
									node13->Attach(attach22, true, false, false);
									node13->SetHasEvents(node13->HasEvents() | (Event::DynamicCast(attach22) != 0));
								}
								node11->AddChild(node13);
								node11->SetHasEvents(node11->HasEvents() | node13->HasEvents());
							}
							node10->SetHasEvents(node10->HasEvents() | node11->HasEvents());
						}
						node23->SetHasEvents(node23->HasEvents() | node10->HasEvents());
					}
					{
						Assignment_bt_node_test_selector_loop_ut_8_node25* node25 = BEHAVIAC_NEW Assignment_bt_node_test_selector_loop_ut_8_node25;
						node25->SetClassNameString("Assignment");
						node25->SetId(25);
#if !BEHAVIAC_RELEASE
						node25->SetAgentType("AgentNodeTest");
#endif
						node23->AddChild(node25);
						node23->SetHasEvents(node23->HasEvents() | node25->HasEvents());
					}
					node15->SetHasEvents(node15->HasEvents() | node23->HasEvents());
				}
				{
					Compute_bt_node_test_selector_loop_ut_8_node26* node26 = BEHAVIAC_NEW Compute_bt_node_test_selector_loop_ut_8_node26;
					node26->SetClassNameString("Compute");
					node26->SetId(26);
#if !BEHAVIAC_RELEASE
					node26->SetAgentType("AgentNodeTest");
#endif
					node15->AddChild(node26);
					node15->SetHasEvents(node15->HasEvents() | node26->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node15->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_probability_ut_0

	class SelectorProbability_bt_node_test_selector_probability_ut_0_node0 : public SelectorProbability
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(SelectorProbability_bt_node_test_selector_probability_ut_0_node0, SelectorProbability);
		SelectorProbability_bt_node_test_selector_probability_ut_0_node0()
		{
		}
	public:
		void Initialize(const char* method)
		{
			this->m_method = Action::LoadMethod(method);
		}
	};

	class DecoratorWeight_bt_node_test_selector_probability_ut_0_node3 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_node_test_selector_probability_ut_0_node3, DecoratorWeight);
		DecoratorWeight_bt_node_test_selector_probability_ut_0_node3()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 20;
		}
	};

	class Action_bt_node_test_selector_probability_ut_0_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_probability_ut_0_node1, Action);
		Action_bt_node_test_selector_probability_ut_0_node1()
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

	class DecoratorWeight_bt_node_test_selector_probability_ut_0_node5 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_node_test_selector_probability_ut_0_node5, DecoratorWeight);
		DecoratorWeight_bt_node_test_selector_probability_ut_0_node5()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 30;
		}
	};

	class Action_bt_node_test_selector_probability_ut_0_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_probability_ut_0_node2, Action);
		Action_bt_node_test_selector_probability_ut_0_node2()
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

	class DecoratorWeight_bt_node_test_selector_probability_ut_0_node6 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_node_test_selector_probability_ut_0_node6, DecoratorWeight);
		DecoratorWeight_bt_node_test_selector_probability_ut_0_node6()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 50;
		}
	};

	class Action_bt_node_test_selector_probability_ut_0_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_probability_ut_0_node4, Action);
		Action_bt_node_test_selector_probability_ut_0_node4()
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

		bool bt_node_test_selector_probability_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_probability_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				SelectorProbability_bt_node_test_selector_probability_ut_0_node0* node0 = BEHAVIAC_NEW SelectorProbability_bt_node_test_selector_probability_ut_0_node0;
				node0->SetClassNameString("SelectorProbability");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					DecoratorWeight_bt_node_test_selector_probability_ut_0_node3* node3 = BEHAVIAC_NEW DecoratorWeight_bt_node_test_selector_probability_ut_0_node3;
					node3->SetClassNameString("DecoratorWeight");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					{
						Action_bt_node_test_selector_probability_ut_0_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_selector_probability_ut_0_node1;
						node1->SetClassNameString("Action");
						node1->SetId(1);
#if !BEHAVIAC_RELEASE
						node1->SetAgentType("AgentNodeTest");
#endif
						node3->AddChild(node1);
						node3->SetHasEvents(node3->HasEvents() | node1->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				{
					DecoratorWeight_bt_node_test_selector_probability_ut_0_node5* node5 = BEHAVIAC_NEW DecoratorWeight_bt_node_test_selector_probability_ut_0_node5;
					node5->SetClassNameString("DecoratorWeight");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node5);
					{
						Action_bt_node_test_selector_probability_ut_0_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_selector_probability_ut_0_node2;
						node2->SetClassNameString("Action");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node5->AddChild(node2);
						node5->SetHasEvents(node5->HasEvents() | node2->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				{
					DecoratorWeight_bt_node_test_selector_probability_ut_0_node6* node6 = BEHAVIAC_NEW DecoratorWeight_bt_node_test_selector_probability_ut_0_node6;
					node6->SetClassNameString("DecoratorWeight");
					node6->SetId(6);
#if !BEHAVIAC_RELEASE
					node6->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node6);
					{
						Action_bt_node_test_selector_probability_ut_0_node4* node4 = BEHAVIAC_NEW Action_bt_node_test_selector_probability_ut_0_node4;
						node4->SetClassNameString("Action");
						node4->SetId(4);
#if !BEHAVIAC_RELEASE
						node4->SetAgentType("AgentNodeTest");
#endif
						node6->AddChild(node4);
						node6->SetHasEvents(node6->HasEvents() | node4->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node6->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_probability_ut_1

	class SelectorProbability_bt_node_test_selector_probability_ut_1_node0 : public SelectorProbability
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(SelectorProbability_bt_node_test_selector_probability_ut_1_node0, SelectorProbability);
		SelectorProbability_bt_node_test_selector_probability_ut_1_node0()
		{
		}
	public:
		void Initialize(const char* method)
		{
			this->m_method = Action::LoadMethod(method);
		}
	};

	class DecoratorWeight_bt_node_test_selector_probability_ut_1_node4 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_node_test_selector_probability_ut_1_node4, DecoratorWeight);
		DecoratorWeight_bt_node_test_selector_probability_ut_1_node4()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 0;
		}
	};

	class Action_bt_node_test_selector_probability_ut_1_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_probability_ut_1_node1, Action);
		Action_bt_node_test_selector_probability_ut_1_node1()
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

	class DecoratorWeight_bt_node_test_selector_probability_ut_1_node5 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_node_test_selector_probability_ut_1_node5, DecoratorWeight);
		DecoratorWeight_bt_node_test_selector_probability_ut_1_node5()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 1;
		}
	};

	class Action_bt_node_test_selector_probability_ut_1_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_probability_ut_1_node2, Action);
		Action_bt_node_test_selector_probability_ut_1_node2()
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

	class DecoratorWeight_bt_node_test_selector_probability_ut_1_node6 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_node_test_selector_probability_ut_1_node6, DecoratorWeight);
		DecoratorWeight_bt_node_test_selector_probability_ut_1_node6()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 1;
		}
	};

	class Action_bt_node_test_selector_probability_ut_1_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_probability_ut_1_node3, Action);
		Action_bt_node_test_selector_probability_ut_1_node3()
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

		bool bt_node_test_selector_probability_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_probability_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				SelectorProbability_bt_node_test_selector_probability_ut_1_node0* node0 = BEHAVIAC_NEW SelectorProbability_bt_node_test_selector_probability_ut_1_node0;
				node0->SetClassNameString("SelectorProbability");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					DecoratorWeight_bt_node_test_selector_probability_ut_1_node4* node4 = BEHAVIAC_NEW DecoratorWeight_bt_node_test_selector_probability_ut_1_node4;
					node4->SetClassNameString("DecoratorWeight");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					{
						Action_bt_node_test_selector_probability_ut_1_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_selector_probability_ut_1_node1;
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
					DecoratorWeight_bt_node_test_selector_probability_ut_1_node5* node5 = BEHAVIAC_NEW DecoratorWeight_bt_node_test_selector_probability_ut_1_node5;
					node5->SetClassNameString("DecoratorWeight");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node5);
					{
						Action_bt_node_test_selector_probability_ut_1_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_selector_probability_ut_1_node2;
						node2->SetClassNameString("Action");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node5->AddChild(node2);
						node5->SetHasEvents(node5->HasEvents() | node2->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				{
					DecoratorWeight_bt_node_test_selector_probability_ut_1_node6* node6 = BEHAVIAC_NEW DecoratorWeight_bt_node_test_selector_probability_ut_1_node6;
					node6->SetClassNameString("DecoratorWeight");
					node6->SetId(6);
#if !BEHAVIAC_RELEASE
					node6->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node6);
					{
						Action_bt_node_test_selector_probability_ut_1_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_selector_probability_ut_1_node3;
						node3->SetClassNameString("Action");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node6->AddChild(node3);
						node6->SetHasEvents(node6->HasEvents() | node3->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node6->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_probability_ut_2

	class SelectorProbability_bt_node_test_selector_probability_ut_2_node0 : public SelectorProbability
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(SelectorProbability_bt_node_test_selector_probability_ut_2_node0, SelectorProbability);
		SelectorProbability_bt_node_test_selector_probability_ut_2_node0()
		{
		}
	public:
		void Initialize(const char* method)
		{
			this->m_method = Action::LoadMethod(method);
		}
	};

	class DecoratorWeight_bt_node_test_selector_probability_ut_2_node4 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_node_test_selector_probability_ut_2_node4, DecoratorWeight);
		DecoratorWeight_bt_node_test_selector_probability_ut_2_node4()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 0;
		}
	};

	class Action_bt_node_test_selector_probability_ut_2_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_probability_ut_2_node1, Action);
		Action_bt_node_test_selector_probability_ut_2_node1()
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

	class DecoratorWeight_bt_node_test_selector_probability_ut_2_node5 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_node_test_selector_probability_ut_2_node5, DecoratorWeight);
		DecoratorWeight_bt_node_test_selector_probability_ut_2_node5()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 0;
		}
	};

	class Action_bt_node_test_selector_probability_ut_2_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_probability_ut_2_node2, Action);
		Action_bt_node_test_selector_probability_ut_2_node2()
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

	class DecoratorWeight_bt_node_test_selector_probability_ut_2_node6 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_node_test_selector_probability_ut_2_node6, DecoratorWeight);
		DecoratorWeight_bt_node_test_selector_probability_ut_2_node6()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 0;
		}
	};

	class Action_bt_node_test_selector_probability_ut_2_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_probability_ut_2_node3, Action);
		Action_bt_node_test_selector_probability_ut_2_node3()
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

		bool bt_node_test_selector_probability_ut_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_probability_ut_2");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				SelectorProbability_bt_node_test_selector_probability_ut_2_node0* node0 = BEHAVIAC_NEW SelectorProbability_bt_node_test_selector_probability_ut_2_node0;
				node0->SetClassNameString("SelectorProbability");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					DecoratorWeight_bt_node_test_selector_probability_ut_2_node4* node4 = BEHAVIAC_NEW DecoratorWeight_bt_node_test_selector_probability_ut_2_node4;
					node4->SetClassNameString("DecoratorWeight");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					{
						Action_bt_node_test_selector_probability_ut_2_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_selector_probability_ut_2_node1;
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
					DecoratorWeight_bt_node_test_selector_probability_ut_2_node5* node5 = BEHAVIAC_NEW DecoratorWeight_bt_node_test_selector_probability_ut_2_node5;
					node5->SetClassNameString("DecoratorWeight");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node5);
					{
						Action_bt_node_test_selector_probability_ut_2_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_selector_probability_ut_2_node2;
						node2->SetClassNameString("Action");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node5->AddChild(node2);
						node5->SetHasEvents(node5->HasEvents() | node2->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				{
					DecoratorWeight_bt_node_test_selector_probability_ut_2_node6* node6 = BEHAVIAC_NEW DecoratorWeight_bt_node_test_selector_probability_ut_2_node6;
					node6->SetClassNameString("DecoratorWeight");
					node6->SetId(6);
#if !BEHAVIAC_RELEASE
					node6->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node6);
					{
						Action_bt_node_test_selector_probability_ut_2_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_selector_probability_ut_2_node3;
						node3->SetClassNameString("Action");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node6->AddChild(node3);
						node6->SetHasEvents(node6->HasEvents() | node3->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node6->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_probability_ut_3

	class DecoratorLoop_bt_node_test_selector_probability_ut_3_node4 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_node_test_selector_probability_ut_3_node4, DecoratorLoop);
		DecoratorLoop_bt_node_test_selector_probability_ut_3_node4()
		{
			m_bDecorateWhenChildEnds = true;
			m_bDoneWithinFrame = false;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 1;
		}
	};

	class SelectorProbability_bt_node_test_selector_probability_ut_3_node0 : public SelectorProbability
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(SelectorProbability_bt_node_test_selector_probability_ut_3_node0, SelectorProbability);
		SelectorProbability_bt_node_test_selector_probability_ut_3_node0()
		{
		}
	public:
		void Initialize(const char* method)
		{
			this->m_method = Action::LoadMethod(method);
		}
	};

	class DecoratorWeight_bt_node_test_selector_probability_ut_3_node5 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_node_test_selector_probability_ut_3_node5, DecoratorWeight);
		DecoratorWeight_bt_node_test_selector_probability_ut_3_node5()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 10;
		}
	};

	class Compute_bt_node_test_selector_probability_ut_3_node2 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_selector_probability_ut_3_node2, Compute);
		Compute_bt_node_test_selector_probability_ut_3_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class WaitFrames_bt_node_test_selector_probability_ut_3_node10 : public WaitFrames
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(WaitFrames_bt_node_test_selector_probability_ut_3_node10, WaitFrames);
		WaitFrames_bt_node_test_selector_probability_ut_3_node10()
		{
		}
	protected:
		virtual int GetFrames(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 3;
		}
	};

	class Compute_bt_node_test_selector_probability_ut_3_node11 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_selector_probability_ut_3_node11, Compute);
		Compute_bt_node_test_selector_probability_ut_3_node11()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = (int)(opr1 - opr2);
			return result;
		}
	};

	class DecoratorWeight_bt_node_test_selector_probability_ut_3_node6 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_node_test_selector_probability_ut_3_node6, DecoratorWeight);
		DecoratorWeight_bt_node_test_selector_probability_ut_3_node6()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 10;
		}
	};

	class Compute_bt_node_test_selector_probability_ut_3_node3 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_selector_probability_ut_3_node3, Compute);
		Compute_bt_node_test_selector_probability_ut_3_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class WaitFrames_bt_node_test_selector_probability_ut_3_node9 : public WaitFrames
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(WaitFrames_bt_node_test_selector_probability_ut_3_node9, WaitFrames);
		WaitFrames_bt_node_test_selector_probability_ut_3_node9()
		{
		}
	protected:
		virtual int GetFrames(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 3;
		}
	};

	class Compute_bt_node_test_selector_probability_ut_3_node1 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_selector_probability_ut_3_node1, Compute);
		Compute_bt_node_test_selector_probability_ut_3_node1()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = (int)(opr1 - opr2);
			return result;
		}
	};

		bool bt_node_test_selector_probability_ut_3::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_probability_ut_3");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				DecoratorLoop_bt_node_test_selector_probability_ut_3_node4* node4 = BEHAVIAC_NEW DecoratorLoop_bt_node_test_selector_probability_ut_3_node4;
				node4->SetClassNameString("DecoratorLoop");
				node4->SetId(4);
#if !BEHAVIAC_RELEASE
				node4->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node4);
				{
					SelectorProbability_bt_node_test_selector_probability_ut_3_node0* node0 = BEHAVIAC_NEW SelectorProbability_bt_node_test_selector_probability_ut_3_node0;
					node0->SetClassNameString("SelectorProbability");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("AgentNodeTest");
#endif
					node4->AddChild(node0);
					{
						DecoratorWeight_bt_node_test_selector_probability_ut_3_node5* node5 = BEHAVIAC_NEW DecoratorWeight_bt_node_test_selector_probability_ut_3_node5;
						node5->SetClassNameString("DecoratorWeight");
						node5->SetId(5);
#if !BEHAVIAC_RELEASE
						node5->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node5);
						{
							Sequence* node7 = BEHAVIAC_NEW Sequence;
							node7->SetClassNameString("Sequence");
							node7->SetId(7);
#if !BEHAVIAC_RELEASE
							node7->SetAgentType("AgentNodeTest");
#endif
							node5->AddChild(node7);
							{
								Compute_bt_node_test_selector_probability_ut_3_node2* node2 = BEHAVIAC_NEW Compute_bt_node_test_selector_probability_ut_3_node2;
								node2->SetClassNameString("Compute");
								node2->SetId(2);
#if !BEHAVIAC_RELEASE
								node2->SetAgentType("AgentNodeTest");
#endif
								node7->AddChild(node2);
								node7->SetHasEvents(node7->HasEvents() | node2->HasEvents());
							}
							{
								WaitFrames_bt_node_test_selector_probability_ut_3_node10* node10 = BEHAVIAC_NEW WaitFrames_bt_node_test_selector_probability_ut_3_node10;
								node10->SetClassNameString("WaitFrames");
								node10->SetId(10);
#if !BEHAVIAC_RELEASE
								node10->SetAgentType("AgentNodeTest");
#endif
								node7->AddChild(node10);
								node7->SetHasEvents(node7->HasEvents() | node10->HasEvents());
							}
							{
								Compute_bt_node_test_selector_probability_ut_3_node11* node11 = BEHAVIAC_NEW Compute_bt_node_test_selector_probability_ut_3_node11;
								node11->SetClassNameString("Compute");
								node11->SetId(11);
#if !BEHAVIAC_RELEASE
								node11->SetAgentType("AgentNodeTest");
#endif
								node7->AddChild(node11);
								node7->SetHasEvents(node7->HasEvents() | node11->HasEvents());
							}
							node5->SetHasEvents(node5->HasEvents() | node7->HasEvents());
						}
						node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
					}
					{
						DecoratorWeight_bt_node_test_selector_probability_ut_3_node6* node6 = BEHAVIAC_NEW DecoratorWeight_bt_node_test_selector_probability_ut_3_node6;
						node6->SetClassNameString("DecoratorWeight");
						node6->SetId(6);
#if !BEHAVIAC_RELEASE
						node6->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node6);
						{
							Sequence* node8 = BEHAVIAC_NEW Sequence;
							node8->SetClassNameString("Sequence");
							node8->SetId(8);
#if !BEHAVIAC_RELEASE
							node8->SetAgentType("AgentNodeTest");
#endif
							node6->AddChild(node8);
							{
								Compute_bt_node_test_selector_probability_ut_3_node3* node3 = BEHAVIAC_NEW Compute_bt_node_test_selector_probability_ut_3_node3;
								node3->SetClassNameString("Compute");
								node3->SetId(3);
#if !BEHAVIAC_RELEASE
								node3->SetAgentType("AgentNodeTest");
#endif
								node8->AddChild(node3);
								node8->SetHasEvents(node8->HasEvents() | node3->HasEvents());
							}
							{
								WaitFrames_bt_node_test_selector_probability_ut_3_node9* node9 = BEHAVIAC_NEW WaitFrames_bt_node_test_selector_probability_ut_3_node9;
								node9->SetClassNameString("WaitFrames");
								node9->SetId(9);
#if !BEHAVIAC_RELEASE
								node9->SetAgentType("AgentNodeTest");
#endif
								node8->AddChild(node9);
								node8->SetHasEvents(node8->HasEvents() | node9->HasEvents());
							}
							{
								Compute_bt_node_test_selector_probability_ut_3_node1* node1 = BEHAVIAC_NEW Compute_bt_node_test_selector_probability_ut_3_node1;
								node1->SetClassNameString("Compute");
								node1->SetId(1);
#if !BEHAVIAC_RELEASE
								node1->SetAgentType("AgentNodeTest");
#endif
								node8->AddChild(node1);
								node8->SetHasEvents(node8->HasEvents() | node1->HasEvents());
							}
							node6->SetHasEvents(node6->HasEvents() | node8->HasEvents());
						}
						node0->SetHasEvents(node0->HasEvents() | node6->HasEvents());
					}
					node4->SetHasEvents(node4->HasEvents() | node0->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node4->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_probability_ut_4

	class DecoratorLoop_bt_node_test_selector_probability_ut_4_node15 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_node_test_selector_probability_ut_4_node15, DecoratorLoop);
		DecoratorLoop_bt_node_test_selector_probability_ut_4_node15()
		{
			m_bDecorateWhenChildEnds = true;
			m_bDoneWithinFrame = false;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 1;
		}
	};

	class SelectorProbability_bt_node_test_selector_probability_ut_4_node0 : public SelectorProbability
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(SelectorProbability_bt_node_test_selector_probability_ut_4_node0, SelectorProbability);
		SelectorProbability_bt_node_test_selector_probability_ut_4_node0()
		{
		}
	public:
		void Initialize(const char* method)
		{
			this->m_method = Action::LoadMethod(method);
		}
	};

	class DecoratorWeight_bt_node_test_selector_probability_ut_4_node5 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_node_test_selector_probability_ut_4_node5, DecoratorWeight);
		DecoratorWeight_bt_node_test_selector_probability_ut_4_node5()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 10;
		}
	};

	class Parallel_bt_node_test_selector_probability_ut_4_node10 : public Parallel
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Parallel_bt_node_test_selector_probability_ut_4_node10, Parallel);
		Parallel_bt_node_test_selector_probability_ut_4_node10()
		{
			m_failPolicy = FAIL_ON_ONE;
			m_succeedPolicy = SUCCEED_ON_ALL;
			m_exitPolicy = EXIT_ABORT_RUNNINGSIBLINGS;
			m_childFinishPolicy = CHILDFINISH_LOOP;
		}
	protected:
	};

	class Compute_bt_node_test_selector_probability_ut_4_node2 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_selector_probability_ut_4_node2, Compute);
		Compute_bt_node_test_selector_probability_ut_4_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Compute_bt_node_test_selector_probability_ut_4_node13 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_selector_probability_ut_4_node13, Compute);
		Compute_bt_node_test_selector_probability_ut_4_node13()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			float opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_2, float >();
			float opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_2, float >() = (float)(opr1 + opr2);
			return result;
		}
	};

	class Wait_bt_node_test_selector_probability_ut_4_node4 : public Wait
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Wait_bt_node_test_selector_probability_ut_4_node4, Wait);
		Wait_bt_node_test_selector_probability_ut_4_node4()
		{
		}
	protected:
		virtual double GetTime(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 1000;
		}
	};

	class Compute_bt_node_test_selector_probability_ut_4_node11 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_selector_probability_ut_4_node11, Compute);
		Compute_bt_node_test_selector_probability_ut_4_node11()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = (int)(opr1 - opr2);
			return result;
		}
	};

	class DecoratorWeight_bt_node_test_selector_probability_ut_4_node6 : public DecoratorWeight
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorWeight_bt_node_test_selector_probability_ut_4_node6, DecoratorWeight);
		DecoratorWeight_bt_node_test_selector_probability_ut_4_node6()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetWeight(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 10;
		}
	};

	class Parallel_bt_node_test_selector_probability_ut_4_node12 : public Parallel
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Parallel_bt_node_test_selector_probability_ut_4_node12, Parallel);
		Parallel_bt_node_test_selector_probability_ut_4_node12()
		{
			m_failPolicy = FAIL_ON_ONE;
			m_succeedPolicy = SUCCEED_ON_ALL;
			m_exitPolicy = EXIT_ABORT_RUNNINGSIBLINGS;
			m_childFinishPolicy = CHILDFINISH_LOOP;
		}
	protected:
	};

	class Compute_bt_node_test_selector_probability_ut_4_node3 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_selector_probability_ut_4_node3, Compute);
		Compute_bt_node_test_selector_probability_ut_4_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Compute_bt_node_test_selector_probability_ut_4_node14 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_selector_probability_ut_4_node14, Compute);
		Compute_bt_node_test_selector_probability_ut_4_node14()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			float opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_3, float >();
			float opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_3, float >() = (float)(opr1 + opr2);
			return result;
		}
	};

	class Wait_bt_node_test_selector_probability_ut_4_node9 : public Wait
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Wait_bt_node_test_selector_probability_ut_4_node9, Wait);
		Wait_bt_node_test_selector_probability_ut_4_node9()
		{
		}
	protected:
		virtual double GetTime(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 1000;
		}
	};

	class Compute_bt_node_test_selector_probability_ut_4_node1 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_selector_probability_ut_4_node1, Compute);
		Compute_bt_node_test_selector_probability_ut_4_node1()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = (int)(opr1 - opr2);
			return result;
		}
	};

		bool bt_node_test_selector_probability_ut_4::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_probability_ut_4");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				DecoratorLoop_bt_node_test_selector_probability_ut_4_node15* node15 = BEHAVIAC_NEW DecoratorLoop_bt_node_test_selector_probability_ut_4_node15;
				node15->SetClassNameString("DecoratorLoop");
				node15->SetId(15);
#if !BEHAVIAC_RELEASE
				node15->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node15);
				{
					SelectorProbability_bt_node_test_selector_probability_ut_4_node0* node0 = BEHAVIAC_NEW SelectorProbability_bt_node_test_selector_probability_ut_4_node0;
					node0->SetClassNameString("SelectorProbability");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("AgentNodeTest");
#endif
					node15->AddChild(node0);
					{
						DecoratorWeight_bt_node_test_selector_probability_ut_4_node5* node5 = BEHAVIAC_NEW DecoratorWeight_bt_node_test_selector_probability_ut_4_node5;
						node5->SetClassNameString("DecoratorWeight");
						node5->SetId(5);
#if !BEHAVIAC_RELEASE
						node5->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node5);
						{
							Sequence* node7 = BEHAVIAC_NEW Sequence;
							node7->SetClassNameString("Sequence");
							node7->SetId(7);
#if !BEHAVIAC_RELEASE
							node7->SetAgentType("AgentNodeTest");
#endif
							node5->AddChild(node7);
							{
								Parallel_bt_node_test_selector_probability_ut_4_node10* node10 = BEHAVIAC_NEW Parallel_bt_node_test_selector_probability_ut_4_node10;
								node10->SetClassNameString("Parallel");
								node10->SetId(10);
#if !BEHAVIAC_RELEASE
								node10->SetAgentType("AgentNodeTest");
#endif
								node7->AddChild(node10);
								{
									Compute_bt_node_test_selector_probability_ut_4_node2* node2 = BEHAVIAC_NEW Compute_bt_node_test_selector_probability_ut_4_node2;
									node2->SetClassNameString("Compute");
									node2->SetId(2);
#if !BEHAVIAC_RELEASE
									node2->SetAgentType("AgentNodeTest");
#endif
									node10->AddChild(node2);
									node10->SetHasEvents(node10->HasEvents() | node2->HasEvents());
								}
								{
									Compute_bt_node_test_selector_probability_ut_4_node13* node13 = BEHAVIAC_NEW Compute_bt_node_test_selector_probability_ut_4_node13;
									node13->SetClassNameString("Compute");
									node13->SetId(13);
#if !BEHAVIAC_RELEASE
									node13->SetAgentType("AgentNodeTest");
#endif
									node10->AddChild(node13);
									node10->SetHasEvents(node10->HasEvents() | node13->HasEvents());
								}
								node7->SetHasEvents(node7->HasEvents() | node10->HasEvents());
							}
							{
								Wait_bt_node_test_selector_probability_ut_4_node4* node4 = BEHAVIAC_NEW Wait_bt_node_test_selector_probability_ut_4_node4;
								node4->SetClassNameString("Wait");
								node4->SetId(4);
#if !BEHAVIAC_RELEASE
								node4->SetAgentType("AgentNodeTest");
#endif
								node7->AddChild(node4);
								node7->SetHasEvents(node7->HasEvents() | node4->HasEvents());
							}
							{
								Compute_bt_node_test_selector_probability_ut_4_node11* node11 = BEHAVIAC_NEW Compute_bt_node_test_selector_probability_ut_4_node11;
								node11->SetClassNameString("Compute");
								node11->SetId(11);
#if !BEHAVIAC_RELEASE
								node11->SetAgentType("AgentNodeTest");
#endif
								node7->AddChild(node11);
								node7->SetHasEvents(node7->HasEvents() | node11->HasEvents());
							}
							node5->SetHasEvents(node5->HasEvents() | node7->HasEvents());
						}
						node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
					}
					{
						DecoratorWeight_bt_node_test_selector_probability_ut_4_node6* node6 = BEHAVIAC_NEW DecoratorWeight_bt_node_test_selector_probability_ut_4_node6;
						node6->SetClassNameString("DecoratorWeight");
						node6->SetId(6);
#if !BEHAVIAC_RELEASE
						node6->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node6);
						{
							Sequence* node8 = BEHAVIAC_NEW Sequence;
							node8->SetClassNameString("Sequence");
							node8->SetId(8);
#if !BEHAVIAC_RELEASE
							node8->SetAgentType("AgentNodeTest");
#endif
							node6->AddChild(node8);
							{
								Parallel_bt_node_test_selector_probability_ut_4_node12* node12 = BEHAVIAC_NEW Parallel_bt_node_test_selector_probability_ut_4_node12;
								node12->SetClassNameString("Parallel");
								node12->SetId(12);
#if !BEHAVIAC_RELEASE
								node12->SetAgentType("AgentNodeTest");
#endif
								node8->AddChild(node12);
								{
									Compute_bt_node_test_selector_probability_ut_4_node3* node3 = BEHAVIAC_NEW Compute_bt_node_test_selector_probability_ut_4_node3;
									node3->SetClassNameString("Compute");
									node3->SetId(3);
#if !BEHAVIAC_RELEASE
									node3->SetAgentType("AgentNodeTest");
#endif
									node12->AddChild(node3);
									node12->SetHasEvents(node12->HasEvents() | node3->HasEvents());
								}
								{
									Compute_bt_node_test_selector_probability_ut_4_node14* node14 = BEHAVIAC_NEW Compute_bt_node_test_selector_probability_ut_4_node14;
									node14->SetClassNameString("Compute");
									node14->SetId(14);
#if !BEHAVIAC_RELEASE
									node14->SetAgentType("AgentNodeTest");
#endif
									node12->AddChild(node14);
									node12->SetHasEvents(node12->HasEvents() | node14->HasEvents());
								}
								node8->SetHasEvents(node8->HasEvents() | node12->HasEvents());
							}
							{
								Wait_bt_node_test_selector_probability_ut_4_node9* node9 = BEHAVIAC_NEW Wait_bt_node_test_selector_probability_ut_4_node9;
								node9->SetClassNameString("Wait");
								node9->SetId(9);
#if !BEHAVIAC_RELEASE
								node9->SetAgentType("AgentNodeTest");
#endif
								node8->AddChild(node9);
								node8->SetHasEvents(node8->HasEvents() | node9->HasEvents());
							}
							{
								Compute_bt_node_test_selector_probability_ut_4_node1* node1 = BEHAVIAC_NEW Compute_bt_node_test_selector_probability_ut_4_node1;
								node1->SetClassNameString("Compute");
								node1->SetId(1);
#if !BEHAVIAC_RELEASE
								node1->SetAgentType("AgentNodeTest");
#endif
								node8->AddChild(node1);
								node8->SetHasEvents(node8->HasEvents() | node1->HasEvents());
							}
							node6->SetHasEvents(node6->HasEvents() | node8->HasEvents());
						}
						node0->SetHasEvents(node0->HasEvents() | node6->HasEvents());
					}
					node15->SetHasEvents(node15->HasEvents() | node0->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node15->HasEvents());
			}
			return true;
		}

	// Source file: node_test/selector_stochastic_ut_0

	class SelectorStochastic_bt_node_test_selector_stochastic_ut_0_node0 : public SelectorStochastic
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(SelectorStochastic_bt_node_test_selector_stochastic_ut_0_node0, SelectorStochastic);
		SelectorStochastic_bt_node_test_selector_stochastic_ut_0_node0()
		{
		}
	public:
		void Initialize(const char* method)
		{
			this->m_method = Action::LoadMethod(method);
		}
	};

	class Action_bt_node_test_selector_stochastic_ut_0_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_stochastic_ut_0_node1, Action);
		Action_bt_node_test_selector_stochastic_ut_0_node1()
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

	class Action_bt_node_test_selector_stochastic_ut_0_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_stochastic_ut_0_node2, Action);
		Action_bt_node_test_selector_stochastic_ut_0_node2()
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

	class Action_bt_node_test_selector_stochastic_ut_0_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_stochastic_ut_0_node3, Action);
		Action_bt_node_test_selector_stochastic_ut_0_node3()
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

		bool bt_node_test_selector_stochastic_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_stochastic_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				SelectorStochastic_bt_node_test_selector_stochastic_ut_0_node0* node0 = BEHAVIAC_NEW SelectorStochastic_bt_node_test_selector_stochastic_ut_0_node0;
				node0->SetClassNameString("SelectorStochastic");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_selector_stochastic_ut_0_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_selector_stochastic_ut_0_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_selector_stochastic_ut_0_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_selector_stochastic_ut_0_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_selector_stochastic_ut_0_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_selector_stochastic_ut_0_node3;
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

	// Source file: node_test/selector_stochastic_ut_1

	class SelectorStochastic_bt_node_test_selector_stochastic_ut_1_node0 : public SelectorStochastic
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(SelectorStochastic_bt_node_test_selector_stochastic_ut_1_node0, SelectorStochastic);
		SelectorStochastic_bt_node_test_selector_stochastic_ut_1_node0()
		{
		}
	public:
		void Initialize(const char* method)
		{
			this->m_method = Action::LoadMethod(method);
		}
	};

	class Action_bt_node_test_selector_stochastic_ut_1_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_stochastic_ut_1_node1, Action);
		Action_bt_node_test_selector_stochastic_ut_1_node1()
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

		bool bt_node_test_selector_stochastic_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_stochastic_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				SelectorStochastic_bt_node_test_selector_stochastic_ut_1_node0* node0 = BEHAVIAC_NEW SelectorStochastic_bt_node_test_selector_stochastic_ut_1_node0;
				node0->SetClassNameString("SelectorStochastic");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_selector_stochastic_ut_1_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_selector_stochastic_ut_1_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					True* node2 = BEHAVIAC_NEW True;
					node2->SetClassNameString("True");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					True* node3 = BEHAVIAC_NEW True;
					node3->SetClassNameString("True");
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

	// Source file: node_test/selector_stochastic_ut_2

	class SelectorStochastic_bt_node_test_selector_stochastic_ut_2_node4 : public SelectorStochastic
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(SelectorStochastic_bt_node_test_selector_stochastic_ut_2_node4, SelectorStochastic);
		SelectorStochastic_bt_node_test_selector_stochastic_ut_2_node4()
		{
		}
	public:
		void Initialize(const char* method)
		{
			this->m_method = Action::LoadMethod(method);
		}
	};

	class Action_bt_node_test_selector_stochastic_ut_2_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_selector_stochastic_ut_2_node5, Action);
		Action_bt_node_test_selector_stochastic_ut_2_node5()
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

		bool bt_node_test_selector_stochastic_ut_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/selector_stochastic_ut_2");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				SelectorStochastic_bt_node_test_selector_stochastic_ut_2_node4* node4 = BEHAVIAC_NEW SelectorStochastic_bt_node_test_selector_stochastic_ut_2_node4;
				node4->SetClassNameString("SelectorStochastic");
				node4->SetId(4);
#if !BEHAVIAC_RELEASE
				node4->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node4);
				{
					Action_bt_node_test_selector_stochastic_ut_2_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_selector_stochastic_ut_2_node5;
					node5->SetClassNameString("Action");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node4->AddChild(node5);
					node4->SetHasEvents(node4->HasEvents() | node5->HasEvents());
				}
				{
					False* node0 = BEHAVIAC_NEW False;
					node0->SetClassNameString("False");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("AgentNodeTest");
#endif
					node4->AddChild(node0);
					node4->SetHasEvents(node4->HasEvents() | node0->HasEvents());
				}
				{
					True* node2 = BEHAVIAC_NEW True;
					node2->SetClassNameString("True");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node4->AddChild(node2);
					node4->SetHasEvents(node4->HasEvents() | node2->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node4->HasEvents());
			}
			return true;
		}

}
