int minSteps(int target) {
      
      target=abs(target);
      int sum=0 , diff=0;
      while(sum<target || (sum-target)%2!=0)
      {
          diff++;
          sum+=diff;
      }
      return diff;
    }