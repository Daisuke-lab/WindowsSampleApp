import type { TurboModule } from 'react-native/Libraries/TurboModule/RCTExport';
import { TurboModuleRegistry } from 'react-native';
export interface Spec extends TurboModule {

  getConstants: () => {
    E: number,
    PI: number,
  };

  add(a: number, b: number): Promise<number>;
}

export default TurboModuleRegistry.get<Spec>(
  'FancyMath'
) as Spec | null;