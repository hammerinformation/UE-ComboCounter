#pragma once

namespace Utility
{
	template <float Delay, unsigned int MaxCount = 1024>
	class ComboCounter
	{
		unsigned int Counter{};
		FTimerHandle TimerHandle;

	public:
		ComboCounter(unsigned int StartingValue = 0): Counter(StartingValue)
		{
		}


		void IncreaseCombo(const UWorld* World, const unsigned int& Value = 1, const float& NewDelay = Delay)
		{
			World->GetTimerManager().ClearTimer(TimerHandle);

			World->GetTimerManager().SetTimer(TimerHandle, FTimerDelegate::CreateLambda([&]
			{
				ResetCombo();
			}), NewDelay, false);

			if ((Counter + Value) < MaxCount)
			{
				Counter += Value;
			}
		}

		void ResetCombo()
		{
			Counter = 0;
		}

		unsigned int GetCombo() const
		{
			return Counter;
		}
	};
}
